#include <iostream>
#include <algorithm>

using namespace std;

// Node class for the linked list
class Node {
public:
    int unit_consumption;
    double amount;
    Node* next;
    Node(int unit_consumption, double amount) {
        this->unit_consumption = unit_consumption;
        this->amount = amount;
        this->next = nullptr;
    }
};

// ElectricBill class to manage the linked list
class ElectricBill {
private:
    Node* head;
public:
    ElectricBill() {
        head = nullptr;
    }

    // Method to insert a new bill detail into the linked list
    void insert(int unit_consumption, double amount) {
        Node* newNode = new Node(unit_consumption, amount);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Method to calculate the total bill amount
    double calculate_bill(int total_units_consumed) {
        double total_amount = 0;
        Node* current = head;
        while (current) {
            if (total_units_consumed >= current->unit_consumption) {
                total_amount += current->amount;
            }
            current = current->next;
        }
        return total_amount;
    }

    // Method to apply discount and calculate discounted bill amount
    double apply_discount(int total_units_consumed, double discount_percentage) {
        double total_amount = calculate_bill(total_units_consumed);
        double discounted_amount = total_amount - (total_amount * (discount_percentage / 100));
        return discounted_amount;
    }

    // Method to print bill details sorted by amount
    void print_bill_details() {
        cout << "Electric Bill Details (from lowest to highest):" << endl;
        Node* current = head;
        while (current) {
            cout << "Units Consumed: " << current->unit_consumption << ", Amount: Rs" << current->amount << endl;
            current = current->next;
        }
    }
};

int main() {
    ElectricBill electric_bill;
    electric_bill.insert(100, 50); 
    electric_bill.insert(200, 80);  
    electric_bill.insert(300, 120); 

    int total_units_consumed = 250;
    double discount_percentage = 10; // 10% discount

    double discounted_amount = electric_bill.apply_discount(total_units_consumed, discount_percentage);
    cout << "Total Bill Amount with " << discount_percentage << "% discount: Rs" << discounted_amount << endl;

    electric_bill.print_bill_details();

    return 0;
}
