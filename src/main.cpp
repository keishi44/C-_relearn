#include <iostream>
#include "Cube.h"
#include "Cube.cpp"

Cube *CreateUnitCube(){
    Cube cube;
    cube.setSide(15);
    return &cube;
}

int main(){
    Cube *c = CreateUnitCube();

    double volume = c->getVolume();
    double surfaceArea = c->getSurfaceArea();
    std::cout << "Volume : " << volume << std::endl;
    std::cout << "Surface area : " << surfaceArea << std::endl;
}