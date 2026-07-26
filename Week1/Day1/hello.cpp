#include <iostream>
using namespace std;

int main() {
    int from, to, sum = 0;

    cout <<"From:";
    cin >> from;

    cout <<"To:";
    cin >> to;

    //Make sure from <= to
    if(from > to){
        int temp = from;
        from = to;
        to = temp;
    }

    for(int value = from; value <= to; value++){
        sum = sum + value;
    }

    cout << "Sum: " << sum << endl;
    return 0;
}