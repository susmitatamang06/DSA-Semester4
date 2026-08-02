#include <iostream>
using namespace std;

// Passing Array as a Pointer
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
    return 0;
}