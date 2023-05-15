// point.cpp 
  
#include <iostream>
#include <string>
#include <cmath>

using namespace std; 
   
class Point 
{ 
   private:  
      double x, y;           
   public: 
      Point() {} 
      Point (double x, double y) {  
        this->x = x;
        this->y = y;
      }
      void setX(double a) {  x = a;  } 
      int getX() {  return x;  }
      void setY(double a) {  y = a;  } 
      int getY() {  return y;  } };

int main(){
    double resultado = 0;
    Point Point1;
    Point1.setX(3);
    Point1.setY(7);
    int x1 = Point1.getX();
    int y1 = Point1.getY();
    Point1.setX(2);
    Point1.setY(4);
    int x2 = Point1.getX();
    int y2 = Point1.getY();
    resultado = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout << "El resultado es ";
    cout << resultado << endl;
}
