#include <iostream>

int getMin(int numbers[] , int size){
    int min = numbers[0];
    for(int i = 1; i < size; i++){
        if(numbers[i] < min){
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[] , int size){
    int max = numbers[0];
    for(int i = 1; i < size; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}

int main(){
    int numbers[5] = {4,8,-8,44,77};
    std::cout << getMin(numbers,5) << std::endl;
    std::cout << getMax(numbers,5) << std::endl;
}