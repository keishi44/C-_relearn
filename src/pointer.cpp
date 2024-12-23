#include <iostream>

// many values from function return

void print(void* ptr, char type){
    switch(type){
        case 'i':
            std::cout << *((int*) ptr) << std::endl; // explicit
            break;
        case 'c':
            std::cout << *((char*) ptr) << std::endl;
            break;
    }

    // int x = 5.3;
    // std::cout << (double)x; explicit
}

int main(){
    int number = 5;
    char letter = 'A';
    print(&number ,'i');
    print(&letter ,'c');

}