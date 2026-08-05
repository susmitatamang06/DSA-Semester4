#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n){
    if (n <=1 ) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int fibResult = fibonacci(5);
    cout << "Fibonacci Result: " << fibResult << endl;
    return 0;
}