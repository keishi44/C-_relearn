#include <iostream>

void printNumber(int* numberPtr){
    std::cout << *numberPtr << std::endl;
}

void printLetter(int* letterPtr){
    std::cout << *letterPtr << std::endl;
}

void print(void* ptr, char type){
    switch(type){
        case 'i':
            std::cout << *((int*) ptr) << std::endl;
            break;
        case 'c':
            std::cout << *((char*) ptr) << std::endl;
            break;
    }
}

int main(){
    int number = 5;
    char letter = 'A';
    print(&number , 'i');
    print(&letter , 'c');

}