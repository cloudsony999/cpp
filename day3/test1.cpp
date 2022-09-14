#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int width;
    public:
    void setValues(int,int);//prototype of a function
    int area()
    {
        return length*width;
    }
};
void Rectangle::setValues(int x,int y)
{
    length=x;
    width=y;

}
int main()
{
    cout<<"----------without pointer-----------"<<endl;
    Rectangle r;
    r.setValues(10,7);
    cout<<"area is "<<r.area()<<endl;

    cout<<"----------using pointer-----------"<<endl;
    Rectangle *rect;
    Rectangle rt;
    rt.setValues(4,6);
    rect=&rt;//address of the object
    cout<<"area using pointer is "<<rect->area()<<endl;


    return 0;
}

