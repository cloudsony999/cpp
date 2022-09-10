#include<stdio.h>
struct  point1
{
    int x,y;
};

union  point2
{
    int x,y,z;
};

int main()
{
    point1 p1={10,20};
    //point2 p2={2,3};
    point2 p2;
    p2.x=10;
    p2.y=20;
    p2.z=100;
    printf("%d %d %d",p2.x,p2.y,p2.z);


    return 0;
    
}
