#include <iostream>
using namespace std;
void pastr(int r1)
{
   int c = 1,sp,i,j;
   for(i=0; i<r1; i++)
    {
        for(sp=1; sp <= r1-i; sp++)
        cout<<"  ";

for(j=0; j <= i; j++)
{
if (j==0 || i==0)
c = 1;
else
c = c*(i-j+1)/j;
cout<<"    "<<c;
}
cout<<"\n\n";
}
}
int main()
{
int r;
cout<<"\nEnter the number of rows : ";
cin>>r;
cout<<"\n";
cout<<"PASCAL'S TRIANGLE ::\n\n";
pastr(r);
return 0;
}
