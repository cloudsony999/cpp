#include<iostream>
using namespace std;


class A
{
    int x,y;
    public:
    void init();
    void init2();
};

void A::init()
{
    this->x=10;
    this->y=20;
    cout<<this->x<<"   "<<this->y<<endl;
    cout<<this<<endl;
}

void A::init2()
{
    (*this).x=100;
    (*this).y=200;
    cout<<this->x<<"   "<<this->y<<endl;
    cout<<this<<endl;
}


int main()
{
    A a;
    a.init();
    A b;
    b.init();

    A c;
    c.init2();

}