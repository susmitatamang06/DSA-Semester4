#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter a positive nonzero integer: ";
    cin >> number;

    if (number <= 0) {
        cout << "Invalid input! Please enter a positive nonzero integer." << endl;
    }
    else {
        for (int i = 1; i <= number; i++) {
            sum = sum + i;
        }

        cout << "The sum of numbers from 1 to "
             << number << " is " << sum << endl;
    }

    return 0;
}