#include<iostream>
using namespace std;
void test(int a)
{
 try
{
 if(a==0)
throw '0';
if(a==1)
throw 1;
if(a==2)
throw 2.1;
}
/*catch(...)
{cout<<"\n genric catch";}*/
catch (int p)
{cout<<"\n caught a integer"<<p;}
catch(double p)
{cout<<"\n caught a double"<<p;}
catch(...)
{cout<<"\n genric catch";}
}

int main()
{
   test(0); //Character
test(1); //Integer
test(2);//double
return 0;
   
}