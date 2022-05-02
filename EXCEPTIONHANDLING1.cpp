#include<iostream>
using namespace std;

int main()
{
    double a,b;
    cout<<"\n enter two values";
    cin>>a>>b;
    try
    {
        cout<<"\n within try";
        if(b!=0)
            cout<<"\n division is="<<a/b;
        else
        {
            cout<<"\n b=0 encountered";
            throw a;
            //throw;
            cout<<"\n This line will never Be printed";
        }
    }
//cout<<"\n samyak";
    catch(double p)
        //catch(int p)
    {
        cout<<"\n within catch";
        cout<<"\n a can't be divided by b beacuse b=0 and a="<<p;
    }
    catch (double p)
    {
        cout<<"\n Second catch of double executed";
    }
    cout<<"\n program end";
    return 0;
}