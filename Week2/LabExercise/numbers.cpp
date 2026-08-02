/*
Write a program that lets the user enter a series of integers. The user 
should enter -99 to signal the end of the series. After all the numbers 
have been entered, the program should display the largest and 
smallest.
*/

#include <iostream>
using namespace std;

int main() {
    int number;
    int largest, smallest;

    cout << "Enter integers (-99 to stop): ";
    cin >> number;

    // Check if the first number is the sentinel
    if (number == -99) {
        cout << "No numbers were entered." << endl;
        return 0;
    }

    // Initialize largest and smallest with the first number
    largest = number;
    smallest = number;

    // Read remaining numbers
    while (number != -99) {

        if (number > largest)
            largest = number;

        if (number < smallest)
            smallest = number;

        cin >> number;
    }

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}