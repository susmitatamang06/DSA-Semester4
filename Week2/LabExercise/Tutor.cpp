/*
Extend the above program with following: 
If the answer is correct, a message of congratulations should be 
printed. If the answer is incorrect, a message should be printed 
showing the correct message.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int num1 = 100 + rand() % 900;
    int num2 = 100 + rand() % 900;

    int answer;

    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;

    cout << "\nEnter your answer: ";
    cin >> answer;

    if (answer == num1 + num2)
        cout << "Congratulations! Correct answer." << endl;
    else {
        cout << "Incorrect." << endl;
        cout << "Correct answer is " << num1 + num2 << endl;
    }

    return 0;
}