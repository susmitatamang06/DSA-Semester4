/*
Modify the above program again so it displays a menu allowing the 
user to select an addition, subtraction, multiplication, or division 
problem. The final selection on the menu should let the user quit the 
program. After the user has finished the math problem, the program 
should display the menu again. The process is repeated until the user 
chooses to quit the program. 
Input Validation: If the user selects an item not on the menu, display 
an error message and display the menu again.
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