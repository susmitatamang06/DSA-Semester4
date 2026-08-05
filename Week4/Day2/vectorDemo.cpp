#include <iostream>
#include <vector>
using namespace std;

void vectorDemo(){
    // vector<int> vectorData = {1,2,3};
    vector<int> vectorData(3, 5);

    // vectorData.push_back(4);
    vectorData.insert(vectorData.begin() + 1, 100);
    vectorData.push_back(200);
    // vectorData.push_back(5);
    vectorData.erase(vectorData.begin());
    // vectorData.erase(vectorData.begin(), vectorData.end());
    if (vectorData.empty()){
        cout << "No data" << endl;
    }

    for(int data : vectorData){
        cout << data << " ";
    }
    cout << endl;
    cout << "Size: " << vectorData.size() << endl;
    return;
}

int main(){
    vectorDemo();
}