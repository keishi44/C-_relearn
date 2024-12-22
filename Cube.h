#pragma once

class Cube{
    public:
        double getVolume();
        double getSurfaceArea();
        void setSide(double side);
    private:
        double side_;
};