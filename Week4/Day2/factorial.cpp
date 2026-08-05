#include <iostream>
#include <vector>
using namespace std;

// void helloWorld(int index){

// }
int factorial(int n){
    if (n == 1) return 1;
    return n * factorial(n-1);
}

int main(){
    int result = factorial(5);
    cout << "Result: " << result << endl;
    return 0;
}