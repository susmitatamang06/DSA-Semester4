/*
Create a simple number guessing game where the computer genertes a random number between 1-100 and the user guesses
it. Use a do-while loop.

Sample Output:
Guess the number(1-100): 50
Too low! Try again: 75
Too high! Try again: 62
Correct! You took 3 attempts!
*/

#include <iostream>
#include <random>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);

    int secret = dist(gen);
    int guessNumber;
    int attempts = 0;

    cout << "Guess the number(1-100): ";
 
    do {
        cin >> guessNumber;
        attempts = attempts++;

        if(guessNumber < secret){
            cout << "Too low! Try again: ";

        }else if(guessNumber > secret){
            cout << "Too high! Try again: ";

        }else {
            cout << "Correct! You took " << attempts << " attempts!" << endl;
        }

    // } while (guessNumber != secret);
    } while (attempts < 3);
    return 0;
}