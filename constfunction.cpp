#include<iostream>
using namespace std;

class Test
{

    int imp;

    public:
    void setValue(int i=0)
    {
    cout<<"imp is set...."<<endl;
    imp=i;
    }
    int getImp() const
    {
     //   imp=23; // function is not allowing any change its called const function
        return imp;
    }
};
int main()
{
    Test t;
    t.setValue(99);
    cout<<"imp is "<<t.getImp()<<endl;
    return 0;
}