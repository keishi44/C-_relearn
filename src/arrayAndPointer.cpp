#include <iostream>
using namespace std;

int main(){
    int luckyNumbers[5];

    for(int i = 0; i <= 4; i++){
        cout << "Number : ";
        cin >> luckyNumbers[i];
    }

    for(int i = 0; i <= 4; i++){
        cout << *(luckyNumbers + i) << " "; 
    }
}