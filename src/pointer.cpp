#include <iostream>

void print(void* ptr, char type){
    switch(type){
        case 'i' :
            std::cout << *((int*) ptr);
            break; //explicit
        case 'c':
            std::cout << *((char*) ptr);
            break;
    }
}

int main(){
    int number = 5;
    char letter = 'A';
    print(&letter , 'c');

}