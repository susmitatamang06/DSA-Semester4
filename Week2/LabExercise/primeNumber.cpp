#include <iostream>
using namespace std;

int main() {

    bool isPrime;

    cout << "Prime numbers between 2 and 200 are:\n\n";

    for (int num = 2; num <= 200; num++) {

        isPrime = true;

        for (int i = 2; i < num; i++) {

            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}