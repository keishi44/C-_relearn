#include <iostream>

class Stove{
    private:
        int temperature_ = 10; // google style
        //abstraction (setter , getter)
        //getter = readable
        //setter = writeable
    public:
        int getTemperature(){
            return temperature_;
        }
        void setTemperature(int temperature_){
            this->temperature_ = temperature_;
        }

};

int main(){
    Stove stove1;
    stove1.setTemperature(232);
    std::cout << stove1.getTemperature();
}   