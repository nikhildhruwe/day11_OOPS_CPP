
#include <iostream> 
using namespace std; 
  
class Circle { 
    private: 
        double radius; 
    public: 
        void setRadius(double radius){ 
            this ->radius = radius;
        } 
          
        double getPerimeter(){ 
            return 2 * 3.14 * radius;
        } 
}; 
  
int main(){ 
    Circle obj; 
    obj.setRadius(10.2); 
    cout << "Perimeter of circle : " << obj.getPerimeter() << endl; 
    return 0; 
}