#include <iostream>
using namespace std;

// int add(int a, int b){
//     return a + b;
// }

int add(int a, int b){
    cout << "Calling One" << endl;
    return a + b;
}

int add(double a, double b){
    cout << "Calling Two" << endl;
    return a + b;
}

int add(double a, int b){
    cout << "Calling Three" << endl;
    return a + b;
}

int add(int a, double b){
    cout << "Calling Four" << endl;
    return a + b;
}

int main(){
    int sum = add(5, 6);
    cout << "Sum: " << sum << endl;
    return 0;
}