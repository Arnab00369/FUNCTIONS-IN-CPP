#include <iostream>
using namespace std;
int sum(int,int);
float sum(int,float);
int main()
{
  int x,ch;float y;
  cout<<"Enter two numbers ::\n1st Number(Integer Value) = ";
  cin>>x;
  cout<<"2nd Number(Real Value) = ";
  cin>>y;
  cout<<"\nChoose if you want to get the Sum as Real value or Integer Value ::\n1 - For Integer Value,\n2 - For Real Value\nCHOICE = ";
  cin>>ch;
  if(ch==1)
    cout<<"\nSum :: "<<x<<" + "<<y<<" = "<<sum(x,(int)y);
  else
    cout<<"\nSum :: "<<x<<" + "<<y<<" = "<<sum(x,y);
  return 0;
}
int sum(int x,int y)
{
    return x+y;
}
float sum(int x,float y)
{
    return x+y;
}

