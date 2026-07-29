#include <iostream>
using namespace std;

int main(){
    double celcius, fahrenheit;
    cout <<"Enter temperature in Celcius: ";

    fahrenheit = (9.0/5) * celcius + 32;
    cin >> celcius;

    cout << "Temperature in fahrenheit: "<< fahrenheit << endl;

    return 0;
}