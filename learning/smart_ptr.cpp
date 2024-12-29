#include <iostream>
#include <memory>
using namespace std;

class MyClass{
    public:
        MyClass(){
            cout << "Constructor invoked!\n";
        }
        ~MyClass(){
            cout << "Destructor invoked!\n";
        }
};

int main(){
    shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
    cout << shPtr1.use_count() << endl;
        {
            shared_ptr<MyClass>shPtr2 = shPtr1;
            cout << shPtr1.use_count() << endl;
        }
    cout << shPtr1.use_count() << endl;
    return 0;
}