#include <iostream>
using namespace std;

class MyClass{

    private :
        int y = 10;
    protected :
        int z;
    public : 
        int x;
        int getPrivateMember(){
            return y;
        }
};

class Child : public MyClass{
    public :
        int setNumber(int value){
            z = value;
            return z;
    }
};

int main(){

    int value = 200;
    MyClass obj;
    Child childObj;
    obj.x = 100;
    int x = obj.x;
    cout << "cannot access y as it is private memeber of MyClass" << endl;
    cout << "x : " << x << endl;
    value = childObj.setNumber(value);
    cout << "setting z value from inherited class,which is protected member of MyClass  : " << value << endl;
    cout << "private member y : " << obj.getPrivateMember() << endl;
}
