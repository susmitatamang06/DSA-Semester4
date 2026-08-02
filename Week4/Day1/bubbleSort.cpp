#include <iostream>
using namespace std;

void bubbleSort(int inputArray[], int length){
    for (int pivot = 0; pivot < (length - 1); pivot++){
        // Sort apply next to all pivot data
        for(int dataIndex = (pivot + 1); dataIndex < length; dataIndex++){
            int pivotData = inputArray[pivot];
            int nextData = inputArray[dataIndex];

            //For Ascending Order
            if (pivotData > nextData){  //Need to Swap
                int temp = pivotData;
                inputArray[pivot] = nextData;
                inputArray[dataIndex] = temp;
            }
        }
    }
    for(int i = 0; i < length; i++){
        cout << inputArray[i] <<" ";
    }
}

int main(){
    int arrayOne[]= {3,4,1,9,4,7,2};
    int length = sizeof(arrayOne) / sizeof(arrayOne[0]);
    bubbleSort(arrayOne, length);
    return 0;
}