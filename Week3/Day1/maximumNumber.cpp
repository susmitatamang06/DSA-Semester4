/*
Write a function maxOfThree that takes three integers and returns the largest.

Sample Output:
Enter three numbers: 5 12 8
The maximun is: 12
*/

#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c){
    if (a >= b && a >= c) {
        return a;
    }
    else if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "The maximum is: " << maxOfThree(num1, num2, num3) << endl;

    return 0;
}



























// #include <iostream>
// using namespace std;

// // Function to find the largest of three numbers
// int maxOfThree(int a, int b, int c) {
//     if (a >= b && a >= c) {
//         return a;
//     }
//     else if (b >= a && b >= c) {
//         return b;
//     }
//     else {
//         return c;
//     }
// }

// int main() {
//     int num1, num2, num3;

//     cout << "Enter three numbers: ";
//     cin >> num1 >> num2 >> num3;

//     cout << "The maximum is: " << maxOfThree(num1, num2, num3) << endl;

//     return 0;
// }