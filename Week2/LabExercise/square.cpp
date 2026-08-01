#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "Enter a positive integer (1-15): ";
    cin >> number;

    if (number <= 0 || number > 15) {
        cout << "Invalid input! Please enter a number between 1 and 15." << endl;
    }
    else {
        for (int i = 1; i <= number; i++) {

            for (int j = 1; j <= number; j++) {
                cout << "X";
            }

            cout << endl;
        }
    }

    return 0;
}