#include <iostream>
using namespace std;
float max(float,float);
int main()
{
  float x,y;
  cout<<"Enter two numbers ::\n1st Number = ";
  cin>>x;
  cout<<"2nd Number = ";
  cin>>y;
  cout<<"The greater of "<<x<<" and "<<y<<" is = "<<max(x,y);
  return 0;
}
float max(float x,float y)
{
    if(x>y)
        return x;
    else
        return y;
}

