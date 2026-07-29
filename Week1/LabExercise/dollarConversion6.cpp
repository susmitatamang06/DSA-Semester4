#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double YEN_PER_DOLLAR = 83.14;
    const double EUROS_PER_DOLLAR = 0.7337;

    double dollars, yen, euros;

    cout << "Enter amount in U.S. dollars: $";
    cin >> dollars;

    yen = dollars * YEN_PER_DOLLAR;
    euros = dollars * EUROS_PER_DOLLAR;

    cout << fixed << showpoint << setprecision(2);

    cout << "Japanese Yen: " << yen << endl;
    cout << "Euros: " << euros << endl;

    return 0;
}