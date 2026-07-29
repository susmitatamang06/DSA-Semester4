#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int classA, classB, classC;
    double income;

    cout << "Enter number of Class A tickets sold: ";
    cin >> classA;

    cout << "Enter number of Class B tickets sold: ";
    cin >> classB;

    cout << "Enter number of Class C tickets sold: ";
    cin >> classC;

    income = (classA * 15) + (classB * 12) + (classC * 9);

    cout << fixed << showpoint << setprecision(2);
    cout << "Total income: £" << income << endl;

    return 0;
}