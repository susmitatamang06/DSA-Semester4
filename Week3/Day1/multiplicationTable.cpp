/*
Write a program that generates a multiplication table for numbers 1-10 using nested loops.

Sample Output:
   1  2  3  4  5  6  7  8  9  10
1  1  2  3  4  5  6  7  8  9  10
1  2  4  6  8  10 12 14 16 18 20
3  3  6  9  12 15 18 21 24 27 30
......
*/

#include <iostream>
using namespace std;

int main(){
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            cout << (i*j) << " ";
        }
        cout << endl;
    }
}
























