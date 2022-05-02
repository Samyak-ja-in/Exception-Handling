#include<iostream>
using namespace std;
void divide(float p,float q)
{
 try
{
 if(q!=0)
cout<<"\n division of"<<p<<"/"<<q<<"is="<<p/q;
else
{
cout<<"\n can't be divided";
throw(p);
}
}
catch (float)
{
cout<<"\n caught value inside function catch";
throw;}
}
int main()
{
    float a,b,c,d;
    cout<<"enter four values";
    cin>>a>>b>>c>>d;
    try
    {
    divide(a,b);
    divide(c,d);
    }
    catch(float)
    {
     cout<<"\nrethrown got in main";
    }
    return 0;
}