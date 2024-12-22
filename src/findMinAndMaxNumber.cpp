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

void getMinAndMax(int numbers[] , int size , int *max , int *min){
    for(int i = 1; i < size; i++){
        if(numbers[i] > *max){
            *max = numbers[i];
        }
        else if(numbers[i] < *min){
            *min = numbers[i];
        }
    }
}

int main(){
    int numbers[5] = {4,8,-8,44,77};
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers,5,&max,&min);
    std::cout << "Min : " << min << std::endl;
    std::cout << "Max : " << max << std::endl;
}