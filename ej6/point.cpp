// point.cpp 
  
#include <iostream>
#include <string>
#include "point.h"

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
      ~Point();
      void setX(double a) {  x = a;  } 
      int getX() {  return x;  }
      void setY(double a) {  y = a;  } 
      int getY() {  return y;  } 

      char *toString() 
      {
         char buf[20];  

         return sprintf(buf,"%f", this->x)+ ", " + 
                sprintf(buf, "%f",this->y); 
      }
};


