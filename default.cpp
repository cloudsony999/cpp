#include<iostream>
using namespace std;

class sample
{    
    int a,b,c;
    public:
    sample()
    {
    a=10;
    b=20;
    c=30;
    cout<<"\n Default Constructor involved "<<endl;
    }
    sample(int i)
    {
    
    cout<<"\n parametrized Constructor involved "<<i<<endl;
    }

    ~sample()
    {
        cout<<"I am a destructor\n";

    }
    /*
    ~sample(int y)
    {
        cout<<"I am a destructor\n";

    }
    */

    void display()
    {
        cout<<"\n a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
    }    
};
int main()
{
    sample s,s1,s2,s3;
    s.display();
    sample g(12);
    cout<<"----------------calling destructor-----------"<<endl;

    g.sample::~sample();
    s.sample::~sample();
    return 0;
}
