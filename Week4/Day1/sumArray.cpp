#include <iostream>
using namespace std;

// Passing Array as a Pointer
int sumArray(int arrayInput[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum = sum + arrayInput[i];
    }
    return sum;
}

int sum(int *array, int sizeOfArray){
    int sum = 0;
    for(int i = 0; i < sizeOfArray; i++){
        sum = sum + *(array + i);
    }
    return sum;
}

int main(){
    int arrayOne[]= {1,2,3,4,5,6,7,8,9,0};
    int length = sizeof(arrayOne) / sizeof(arrayOne[0]);

    int result = sum(arrayOne, length);
    cout << "Result: " << result << endl;

    int result1 = sumArray(arrayOne, length);
    cout << "Result1: " << result1 << endl;
    return 0;
}