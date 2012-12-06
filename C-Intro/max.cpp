#include <iostream>
using namespace std;
void main()
{
cout<<"Number of Numbers";
int a,b,c=0;
cin>>a;
for(int i=0;i<a;i++)
{
cin>>b;
if(b>c)
c=b;
}
cout<<"\nThe Max Number is  "<<c<<endl;
}
