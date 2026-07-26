/*
Write a program that asks the user for a positive integer n and 
calculates the sum of all numbers from 1 to n suing a for loop.

Sample Output:
Enter a positive number: 5
Sum of 1 to 5 is: 15
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter a positive number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of 1 to " << n << " is: " << sum << endl;
    return 0;
}