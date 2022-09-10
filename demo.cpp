#include<iostream>
using namespace std;

class Box
{
    public:
    double length;
    double breathe;
    double height;

};

int main()
{
    Box b1;//object...
    Box b2;
    //first Box Specs
    b1.length=23.8;
    b1.height=44.5;
    b1.breathe=3.4;
     //second Box Specs
    b2.length=22.8;
    b2.height=46.5;
    b2.breathe=55.4;

    //dimension of 1st box

    cout<<"length is "<<b1.length<<endl;
    cout<<"height is "<<b1.length<<endl;
    cout<<"breathe is "<<b1.length<<endl;
    //dimension of 2nd box
    
    cout<<"length is "<<b2.length<<endl;
    cout<<"height is "<<b2.length<<endl;
    cout<<"breathe is "<<b2.length<<endl;
    



    return 0;
}

