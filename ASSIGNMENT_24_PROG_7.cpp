#include <iostream>
using namespace std;
int sum_num(int x=0,int y=0,int z=0)
{
    return (x+y+z);
}
int main()
{
    int a,b,c,ch;
    cout<<"Choose to Add 2 or 3 numbers = ";
    cin>>ch;
    if(ch==2)
    {
        cout<<"Enter ::\n1st Number = ";
        cin>>a;
        cout<<"2nd Number = ";
        cin>>b;
        cout<<"\nOUTPUT::\nSum :: "<<a<<" + "<<b<<" = "<<sum_num(a,b);
    }
    else if(ch==3)
    {
        cout<<"Enter ::\n1st Number = ";
        cin>>a;
        cout<<"2nd Number = ";
        cin>>b;
        cout<<"3rd Number = ";
        cin>>c;
        cout<<"\nOUTPUT ::\nSum :: "<<a<<" + "<<b<<" + "<<c<<" = "<<sum_num(a,b,c);
    }
    else
        cout<<"INPUT ERROR !!!! You can only choose between 2 and 3 numbers to add ";
    return 0;
}
