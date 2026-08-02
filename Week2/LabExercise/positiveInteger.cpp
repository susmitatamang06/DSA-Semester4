/*
Write a program that asks the user for a positive nonzero integer 
value. The program should use a loop to get the sum of all the integers 
from 1 up to the number entered. For example, if the user enters 50, 
the loop will find the sum of 1+2+3+4+….+50.
*/

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