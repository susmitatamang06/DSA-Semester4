/*
Write a program with functions for basic arithmetic operation:

add(a, b) - returns sum
subract(a, b) - returns difference
multiply(a, b) - returns product
divide(a, b) - returns quotient (handle division by zero)

Sample Ouptut:
Enter two numbers: 10  5
10 + 5 = 15
10 - 5 = 5
10 * 5 = 50
10 / 5 = 2
*/

#include <iostream>
using namespace std;

double add(double a, double b){
    double sum = a + b;
    cout << a << " + " << b << " = " << sum << endl;
    return sum;
}

double subract(double a, double b){
    int max = (a > b)? a: b;
    int min = (a < b)? a: b;
    double diff = a - b;
    cout << a << " - " << b << " = " << diff << endl;
    return diff;
}

double multiplication(double a, double b){
    double  multiply= a * b;
    cout << a << " * " << b << " = " << multiply << endl;
    return multiply;
}

double division(double a, double b){
    if (b!=0){
        double divide= a / b;
        cout << a << " / " << b << " = " << divide << endl;
    }else {
        cout << a << " / " << b << " = Error: Division by zero!" << endl;
    }
    return 0;
}

int main(){
    int a, b;
    cout << "Enter two numbers: "; 
    cin >> a;
    cin >> b;
    add(a,b);
    subract(a,b);
    multiplication(a,b);
    division(a,b);
    return 0;
}