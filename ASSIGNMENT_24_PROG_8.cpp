#include <iostream>
using namespace std;
float area(float);
int area(int,int);
float area(float,float);
int main()
{
    float r,b,h;int l,br;
    cout<<"Enter required details for Area ::\n\nFor Circle ::\nEnter the Radius = ";
    cin>>r;
    cout<<"\n\nFor Rectangle ::\nEnter Length = ";
    cin>>l;
    cout<<"Enter Breadth = ";
    cin>>br;
    cout<<"\n\nFor Triangle ::\nEnter Base = ";
    cin>>b;
    cout<<"Enter Height = ";
    cin>>h;
    cout<<"\nOUTPUT ::\n\nArea of Circle = "<<area(r)<<" sq. units,\n\nArea of Rectangle = "<<area(l,br)<<" sq. units,\n\nArea of Triangle = "<<area(b,h)<<" sq. units";
    return 0;
}
float area(float r)
{
    return (3.14*r*r);
}
int area(int l,int br)
{
    return (l*br);
}

float area(float b,float h)
{
    return (0.5*b*h);
}
