#include<iostream>
using namespace std;
class Square;//class prototype

class Rectangle
{
    private:
    int length;
    int width;
    public:
    int area()
    {
        return length*width;
    }
    void convert(Square sq);
};
class Square
{
    private:
    int side;
    public:
    void setside(int x)
    {
        side=x;
    }
    friend class Rectangle;
};
void Rectangle::convert(Square s)
{
    length=s.side;//allowed 2 access private
    width=s.side;
}
int main()
{
    
Square sq;
Rectangle rc;
sq.setside(4);
rc.convert(sq);
cout<<rc.area();

    return 0;
}


