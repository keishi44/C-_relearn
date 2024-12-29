#include "Square.h"

double Square::getVolume(){
    return side_ * side_ * side_;
}

double Square::getArea(){
    return side_ * side_;
}

void Square::setSide(double side){
    side_ = side;
}