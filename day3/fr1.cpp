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
    friend Rectangle duplicate(Rectangle);
};
Rectangle duplicate(Rectangle clone)
{
    Rectangle nr;
    nr.length=clone.length*2;
    nr.width=clone.width*2;
    return nr;
}
void Rectangle::setValues(int x,int y)
{
    length=x;
    width=y;

}
int main()
{
    Rectangle r1,r2;
    r1.setValues(2,3);
    r2=duplicate(r1);
    cout<<r1.area()<<"  "<<r2.area()<<endl;
    return 0;
}


