#include <iostream>
using namespace std;
class power
{
public :
    int a,b,p=1;
    void powernum()
    {
        for(int i=0;i<b;i++)
        {
            p=p*a;
        }
        cout<<"Therefore, "<<a<<" raised to the power "<<b<<" is = "<<p;
    }

};
int main()
{
    power w;
    cout<<"Enter a number = ";
    cin>>w.a;
    cout<<"Enter the value of the raised power = ";
    cin>>w.b;
    w.powernum();
    return 0;
}
