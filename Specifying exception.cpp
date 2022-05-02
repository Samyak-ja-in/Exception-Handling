#include<iostream>
using namespace std;
void test(int a) throw(char)
{
 if(a==0)
throw 1;
if(a==1)
throw '1';
if(a==2)
throw 2.3;
}
int main()
{
try
{
test(0);
test(1);
test(2);
}
catch(...)
{cout<<"\n genric catch";}
return 0;
}