#include <iostream>
#include <vector>
using namespace std;

int alternating_sum(vector<int> vectorData){
    int result = 0;
    for (int index = 0; index < vectorData.size(); index++){
        if (index % 2 == 0){
            result = result + vectorData.at(index);
        }else{
            result = result - vectorData.at(index);
        }
    }
    return result;
}

int main(){
    vector<int> data = {1,4,9,16,9,7,4,9,11};
    int result = alternating_sum(data);
    cout << "Result: " << result << endl;
}