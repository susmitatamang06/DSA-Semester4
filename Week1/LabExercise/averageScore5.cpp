#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double score1, score2, score3, score4, score5;
    double average;

    cout << "Enter five test scores: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;

    average = (score1 + score2 + score3 + score4 + score5) / 5;

    cout << fixed << showpoint << setprecision(1);
    cout << "Average score: " << average << endl;

    return 0;
}



// #include <iostream>
// using namespace std;

// int main(){
//     int sum=0;
//     int avg=0;

//     for(int i=0; i<=5; i++){
//         int value;
//         cout << "Your data: ";
//         cin >> value;
//         sum = sum + value;
//     } 
//     avg = sum/5.0;
// }