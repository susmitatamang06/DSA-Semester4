/*
Write a program that asks the user for a score (0-100) and prints the grade using if-else:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: Below 60

Sample Output:
Enter your score: 85
Your grade is: B
*/

#include <iostream>
using namespace std;

int main(){
    int score = 0;
    cout << "Enter your score: ";
    cin >> score;

    if(score>=90 && score <=100){
        cout << "Your grade is: A"<< endl;
    }
    else if(score>=80 && score <=89){
        cout << "Your grade is: B"<< endl;
    }
    else if(score>=70 && score <=79){
        cout << "Your grade is: C"<< endl;
    }
    else if(score>=60 && score <=69){
        cout << "Your grade is: D"<< endl;
    }else{
        cout << "Your grade is: Below 60"<< endl;
    }
}