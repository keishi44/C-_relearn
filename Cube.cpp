#include "Cube.h"

double Cube::getVolume(){
    return side_ * side_ * side_;
};

double Cube::getSurfaceArea(){
    return 6 * side_ * side_;
};

void Cube::setSide(double side){
    side_ = side;
};