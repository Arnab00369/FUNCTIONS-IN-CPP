#include <iostream>
using namespace std;
class highestdig
{
public:
    int n,max=-1,r;

    void highestdigit()
    {
     int n1=n;
    while(n!=0)
    {
        r=n%10;
        if(r>max)
            max=r;
            n=n/10;
    }
    cout<<"The maximum digit in the number "<<n1<<" is = "<<max;
    }

};
int main()
{
    highestdig a;
    cout<<"Enter a number :: "<<endl;
    cin>>a.n;
    a.highestdigit();
    return 0;
}
