#include <iostream>
using namespace std;

int main(){
    double arrayOne[5]={1,2,3,4,5};
    int size = sizeof(arrayOne);
    int sizeOne = sizeof(arrayOne[0]);
    int length = sizeof(arrayOne) / sizeof(arrayOne[0]);

    cout << size << endl;
    cout << sizeOne << endl;
    cout << arrayOne << endl;
    cout << *(arrayOne) << endl;
    cout << *(arrayOne + 1) << endl;
}