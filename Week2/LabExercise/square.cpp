/*
Write a program that asks the user to enter a positive integer no 
greater than 15. The program should then display a screen using the 
characters ‘X’. 
For example, if input is 5: 
XXXXX 
XXXXX 
XXXXX 
XXXXX 
XXXXX 
*/

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