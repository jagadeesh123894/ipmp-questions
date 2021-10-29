/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
#define ll unsigned long long int

ll fib(ll n)
{
    ll a=0,b=1,c,i;
    
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    {
        for(i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
    
}

int main()
{
    ll n;
    
    cin>>n;
    
    cout<<fib(n);

    return 0;
}
