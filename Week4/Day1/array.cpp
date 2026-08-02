// #include <iostream>
// using namespace std;

// int main(){
//     int arrayOne[5]={1,2,3,4,5};
//     int size = sizeof(arrayOne);
//     int sizeOne = sizeof(arrayOne[0]);
//     int length = sizeof(arrayOne) / sizeof(arrayOne[0]);

//     cout << size << endl;
//     cout << sizeOne << endl;
//     cout << arrayOne << endl;
//     cout << *(arrayOne) << endl;
//     cout << *(arrayOne + 1) << endl;

//     int result = sum(arrayOne);
//     cout << result << endl;
// }


// int sum(int inputArray[]){
//     int sum = 0;
//     int length = sizeof(inputArray) / sizeof(inputArray[0]);
//     for(int i = 0; i < length; i++){
//         sum = sum + inputArray[i];
//     }
//     return sum;
// }

#include <iostream>
using namespace std;

// int sum(int inputArray[], int length);

int main(){
    int arrayOne[5] = {1,2,3,4,5};

    int size = sizeof(arrayOne);
    int sizeOne = sizeof(arrayOne[0]);
    int length = sizeof(arrayOne) / sizeof(arrayOne[0]);

    cout << size << endl;
    cout << sizeOne << endl;
    cout << arrayOne << endl;
    cout << *(arrayOne) << endl;
    cout << *(arrayOne + 1) << endl;

    int result = sum(arrayOne);
    cout << result << endl;

    return 0;
}

// // int sum(int inputArray[], int length){
//     int sum = 0;
//     int i = 0;
//     // for(int i = 0; i < length; i++){
//     //     sum = sum + inputArray[i];
//     // }
//     sum = sum + *(inputArray + i);
//     return sum;
// }

int sum(int *inputArray){
    int sum = 0;
   
    for(int i = 0; i < 6; i++){
        sum = sum + *(inputArray + i);
    }
    return sum;
}