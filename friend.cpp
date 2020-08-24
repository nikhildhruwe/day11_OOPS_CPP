#include <iostream>
using namespace std;

class A {

    private:
        char ch='A';
        int number = 11;
        string name = "Nikhil";
    public:
        friend class B;
        friend void showName(A);
};

class B {

    public:
        void display(A obj){
            cout << "ch :" << obj.ch << endl;
            cout << "number : " << obj.number << endl;
        }
};

void showName(A obj){
    cout << "Name :" << obj.name << endl;
}

int main(){
    
    A obj1;
    B obj2;
    obj2.display(obj1);
    showName(obj1);
    return 0;
}