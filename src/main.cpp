#include <iostream>
#include "Cube.h"
#include "Cube.cpp"


int main(){
    Cube  c;
    c.setSide(3);

    double volume = c.getVolume();
    double surfaceArea = c.getSurfaceArea();
    std::cout << "Volume : " << volume << std::endl;
    std::cout << "Surface area : " << surfaceArea << std::endl;
}