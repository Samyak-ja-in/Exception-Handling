#include<iostream>
using namespace std;
void test(int a) throw(char)
{
try
{
 if(a==0)
throw 1;
if(a==1)
throw '1';
if(a==2)
throw 2.3;
}
catch(...)
{
 cout<<"\n within function caught";
throw;
}
}
int main()
{
try
{
test(1);
test(0);
test(2);
}
catch(...)
{cout<<"\n rethrown in main";}
return 0;
}