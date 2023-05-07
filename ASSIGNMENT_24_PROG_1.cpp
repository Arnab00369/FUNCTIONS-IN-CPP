#include <iostream>
using namespace std;
class primeno
{
public :
    int n;
    void checkprimeno()
    {
        int flag=0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
              flag=1;
              break;
            }
        }
        if(flag==0)
            cout<<"The number N = "<<n<<" is a Prime Number "<<endl;
        else
           cout<<"The number N = "<<n<<" is not a Prime Number "<<endl;
    }
};
int  main()
{
    primeno a;
    cout<<"Enter a Number :: "<<endl;
    cout<<"N = ";
    cin>>a.n;
    a.checkprimeno();
    return 0;
}
