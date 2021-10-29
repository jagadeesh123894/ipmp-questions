/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

 #include <iostream>

using namespace std;

int main()
{
    int n,i,low,high,mid,max;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    cin>>a[i];

    low=0;high=n-1;mid=(low+high)/2;

    while(high!=low+1)
    {
        if((a[mid]>=a[low])&&(a[mid]>=a[high]))
        low=mid;
        else if((a[mid]<=a[low])&&(a[mid]<=a[high]))
        high=mid;
    
     mid=(low+high)/2;
    }

    max=a[low]>a[high]?a[low]:a[high];

    cout<<max;
}