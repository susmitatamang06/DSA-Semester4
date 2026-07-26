#include <iostream>
using namespace std;

int main() {
    int array[] = {1,2,3,4,5};
    for(int value:array){
        cout <<value<<" ";
    }
    cout << endl;

    for(auto& num : array){
        num *= 2;     //Modify in place
    }

    for(int index=0; index < size(array); index++){
        int value = array[index] * 2;
        cout << value << " ";
    }
    cout << endl;
    // for(int value:array){
    //     cout <<value<<" ";
    // }
    // cout << endl;
    return 0;
}