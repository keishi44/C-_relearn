#include <iostream>
#include "Square.h"
#include "Square.cpp"

int main(){
    Square s;
    s.setSide(5);
    double area = s.getArea();
    double volume = s.getVolume();
    std::cout << "Area : " <<   area<< std::endl;
    std::cout << "Volume : " << volume << std::endl;
}