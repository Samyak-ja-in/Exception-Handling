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
else
cout<<"\n no throw and catch";
}
catch (int p)
{cout<<"\n caught an integer"<<p;}
catch(char p)
{cout<<"\n caught an character"<<p;}
catch(double p)
{cout<<"\n caught a double"<<p;}
}

int main()
{
   test(0); //Character
test(1); //Integer
test(2);//double
test(3);
return 0;
   
}