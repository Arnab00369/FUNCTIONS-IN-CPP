#include <iostream>
using namespace std;
void swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"\nOutput ::\nThe Swapped Values are ::\n1st Number = "<<x<<", and 2nd Number = "<<y;
}
int main()
{
    int a,b;
    cout<<"Enter two Numbers ::\n1st Number = ";
    cin>>a;
    cout<<"2nd Number = ";
    cin>>b;
    swap(a,b);
    return 0;
}

