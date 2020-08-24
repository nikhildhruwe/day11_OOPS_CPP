#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "constructor A" << endl;
        }
};

class B : public A{
    public:
        B(){
        cout << "constructor B" << endl;
        }
};

class C : public A{
    public:
        C(){
            cout << "constructor C" << endl;
        }
};

class D : public B, public C{
    public:
        D(){
            cout << "constructor D" << endl;
        }
};

int main(){
    D d;
}