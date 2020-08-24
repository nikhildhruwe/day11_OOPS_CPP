#include <iostream>
using namespace std;

class Add{
    public :
        double a = 1, b = 2;

       double compute(){
            cout << "compute method in class A" << endl;
            return a + b;
        } 

        int add(int x, int y){
            return x + y;
        }

        float add(float x, float y){
            return x + y ;
        }


};

class Computation : public Add{
    public :
        double a = 10, b = 20; 
        double compute (){
         cout <<  Add::compute() << endl;
            cout << "compute method in Computation" << endl;
            return a + b;
        }
};

int main(){
    Add obj;
    cout << "Add, 1 + 2 = " << obj.add(1,2) << endl;
    cout << "Add, 1.1 + 2.2  = " << obj.add(1.1f, 2.2f) << endl;

    Computation obj2;
    cout << obj2.compute() << endl;
}
