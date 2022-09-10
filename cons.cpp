#include<iostream>
using namespace std;

class A
{
    private:
    double x;
   public:
    A()
    {
        x=0.0;
        cout<<"Hi Mouma I am a cons...."<<endl;

    }
    double get_x()
    {
        return x;
    }

};

int main()
{
    cout<<"hi"<<endl;
    A a;
    cout<<a.get_x()<<endl;
    A a1;
     cout<<a1.get_x()<<endl;
    A a2;
     cout<<a2.get_x()<<endl;
    A a3;
     cout<<a3.get_x()<<endl;
    return 0;
}