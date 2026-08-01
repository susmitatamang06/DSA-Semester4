#include <iostream>
using namespace std;

int main() {
    int num;
    int greaterCount = 0, lessCount = 0, equalCount = 0;
    int greaterSum = 0, lessSum = 0;

    cout << "Enter 10 integer numbers:\n";

    for (int i = 1; i <= 10; i++) {
        cin >> num;

        if (num > 50) {
            greaterCount++;
            greaterSum += num;
        }
        else if (num < 50) {
            lessCount++;
            lessSum += num;
        }
        else {
            equalCount++;
        }
    }

    cout << "\nNumbers greater than 50: " << greaterCount << endl;
    cout << "Numbers less than 50: " << lessCount << endl;
    cout << "Numbers equal to 50: " << equalCount << endl;

    if (greaterCount > 0)
        cout << "Average of numbers greater than 50: "
             << (double)greaterSum / greaterCount << endl;
    else
        cout << "No numbers greater than 50." << endl;

    if (lessCount > 0)
        cout << "Average of numbers less than 50: "
             << (double)lessSum / lessCount << endl;
    else
        cout << "No numbers less than 50." << endl;

    return 0;
}