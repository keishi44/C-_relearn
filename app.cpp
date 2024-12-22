#include <iostream>


// inheritance
// parent class (attributes 3) and child class (can access parents' 3 attributes)

class Animal{
    public:
        void eat(){
            std::cout << "This animal is eating!\n";
        }
        void sleep(){
            std::cout << "This animal is sleeping!\n";
        }
};

class Tiger : public Animal{

};

int main(){
    Tiger tiger1;
    std::cout << tiger1.eat() << std::endl;
}