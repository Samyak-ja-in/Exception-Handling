#include<iostream>
using namespace std;
int factorial(int f)
{
if(f>=0)
{
if(f==0)
return 1;
while(f>0)
 return (f*factorial(f-1));
}
else
{
cout<<"\n exception caught";
throw f;
}
}

int main()
{
 int a,b;
cout<<"\n enter two values";
cin>>a>>b;
    try
    {
     cout<<"\n Within try block";
     cout<<"\n factorial of"<<a<<"="<<factorial(a);
     cout<<"\n factorial of"<<b<<"="<<factorial(b);
    }
    catch(int p)
    {
     cout<<"\n factorial of negative value"<<p<<"can't be found";
    }
    cout<<"\n program end";
     return 0;
}