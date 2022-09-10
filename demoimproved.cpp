#include<iostream>
using namespace std;

class Box
{
    private://default
    double length;
    double breathe;
    double height;
   
    public:
    //member function 
    
    void setLength(double l);
    void setBreathe(double b);
    void setHeight(double h);
    
    double getVolume();

};

//member functions definitions in a external way

inline void Box::setLength(double l)
{
    length=l;
    
}
inline void Box::setBreathe(double b)
{
    breathe=b;
    
}

inline void Box::setHeight(double h)
{
    height=h;
    
}

inline double Box::getVolume()
{
    return length*breathe*height;
}

int main()
{
   Box b1,b2;
   //double volume=0.0;
   //box1 spec

   b1.setBreathe(6.0);//calling area A6
   b1.setLength(5.0);//B8
   b1.setHeight(4.0);//C7 compiler overhead slowness measured
  //box2 spec

   b2.setBreathe(7.0);
   b2.setLength(3.0);
   b2.setHeight(9.0);

   cout<<"the volume of 1st box is "<<b1.getVolume()<<endl;
   cout<<"the volume of 2nd box is "<<b2.getVolume()<<endl;

    return 0;
}

