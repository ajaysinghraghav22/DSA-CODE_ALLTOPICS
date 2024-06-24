
#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the Amount: ";
    cin >> amount;

    int num_100 = 0, num_50 = 0, num_20 = 0, num_1 = 0;

    // Step to control the flow of switch cases
    int step = 1;

    switch (step) {
        case 1:
            num_100 = amount / 100;
            amount = amount % 100;
        case 2:
            num_50 = amount / 50;
            amount = amount % 50;
        case 3:
            num_20 = amount / 20;
            amount = amount % 20;
        case 4:
            num_1 = amount/1;
        default:
            break;
    }

    cout << "Number of 100 notes: " << num_100 << endl;
    cout << "Number of 50 notes: " << num_50 << endl;
    cout << "Number of 20 notes: " << num_20 << endl;
    cout << "Number of 1 notes: " << num_1 << endl;

    return 0;
}