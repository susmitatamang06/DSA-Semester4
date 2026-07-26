#include <iostream>
using namespace std;

int main(){
    int n;

    cout <<"N:";
    cin >> n;

    for (int line=1; line<=n; line++){
        for (int space=1; space<=(n-line); space++){
            cout <<" ";
        }

        int numberCharacter = 1+ (line-1) * 2;
        for (int charCount = 1; charCount <= numberCharacter; charCount++) {
            cout <<"*";
        }
        // for(int charCount = 1; charCount <= line; charCount++){
        //     //cout <<"*";
        //     cout << (line * charCount) << " ";
        // }
        cout << endl;
    }
    return 0;
}