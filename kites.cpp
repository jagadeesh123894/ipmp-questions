/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

 #include <iostream>

 using namespace std;

 int main()
 {
     int i,j,n,k;
     cin>>n;

     for(i=1;i<=2*n-1;i++)
     {
         if(i<=n)
         {
             for(j=1;j<=2*(n-i);j++)
             cout<<" ";
             for(k=1;k<=2*i-1;k++)
             cout<<"* ";
         }
         else
         {
             for(j=1;j<=2*(i-n);j++)
             cout<<" ";
             for(k=1;k<=2*(2*n-1-i)+1;k++)
             cout<<"* ";
         }
         cout<<endl;
     }
 }
