/*
Write a program that can be used a math tutor for a young student. 
The program should display two random numbers to be added, such 
as: 
247 
+129 
------
The program should then pause while the student works on the 
problem. When the student is ready to check the answer, he or she can 
press a key and the program will display the correct solution: 
247 
+129
------ 
= 376 
[Hint: MIN + rand() % MAX will generate a random number between 
MIN and MAX] 
*/

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