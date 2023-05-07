#include <iostream>
using namespace std;
class fibonacci
{
public:
    int n;
    void checkfib()
    {
        int a=0,b=1,s=0;
        for(int i=0;i<=n;i++)
        {
            s=a+b;
            a=b;
            b=s;
            if(s==n)
               {
                   cout<<n<<" is a Fibonacci Series Number ";
                   break;
               }
            else if((i==n)&&(s!=n))
            {
                cout<<n<<" is not a Fibonacci Series Number ";

            }
            else if(s<n-1&&s!=n)
            {
                continue;

            }


        }
    }
};
int main()
{
    fibonacci a;
    cout<<"Enter a Number ::"<<endl<<"N = ";
    cin>>a.n;
    a.checkfib();
    return 0;
}
