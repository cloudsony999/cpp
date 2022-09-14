#include<iostream>
using namespace std;


class Test
{
    private:
    static int x;
    public:
    static void init(int a)
    {
        x=a;
    }
    void show(){
        cout<<x;
    }
};
int Test::x;
int main()
{
    Test::init(100);
    Test t;
    t.show();
    return 0;

}
