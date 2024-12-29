#include <iostream>

int main(){

    int numbers[] = {1,2,3,4,5};
    int* ptr = numbers;
    std::cout << *(ptr + 2) << std::endl;
}