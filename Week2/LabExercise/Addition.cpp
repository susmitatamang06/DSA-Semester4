#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate two random numbers between 100 and 999
    int num1 = 100 + rand() % 900;
    int num2 = 100 + rand() % 900;

    // Display the problem
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------" << endl;

    // Pause until the user presses Enter
    cout << "Press Enter to see the answer...";
    cin.get();

    // Display the answer
    cout << "\n  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "------" << endl;
    cout << "= " << num1 + num2 << endl;

    return 0;
}