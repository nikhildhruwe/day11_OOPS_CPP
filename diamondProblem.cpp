#include <iostream>
using namespace std;

class A{
    public:
        char a = 'A';
        A(){
            cout << "constructor A" << endl;
        }
};

class B : public A{
    public:
        char b = 'B';
        B(){
        cout << "constructor B" << endl;
        }
};

class C : public A{
    public:
        char c = 'C';
        C(){
            cout << "constructor C" << endl;
        }
};

class D : public B, public C{
    public:
        char d = 'D';
        D(){
            cout << "constructor D" << endl;
        }
};

int main(){
    D d;
   // cout << d.a << endl; // cannot access a cause a member is ambiguous
    cout << d.c << endl;
    cout << d.b << endl;
    cout << d.d << endl;
}