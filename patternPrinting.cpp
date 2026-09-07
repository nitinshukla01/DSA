#include<iostream>
using namespace std;
int print1(int n){
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int print2(int n){
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int print3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int print4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        
        }
        cout<<"\n";
    }
}
int print5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        
        }
        cout<<"\n";
    }
}
int print6(int n)
{
    for(int i=1;i<=n;i++)
    {   int num = 1;
        for(int j=n;j>=i;j--)
        {
            cout<<num;
            num++;
        }
        cout<<"\n";
    }
}
int print7(int n)
{
for(int i=1;i<=n;i++)
 {
    //space
     for(int j=1;j<=n-i-1;j++)
     {
        cout<<" ";
     }
    //star
    for(int j=1;j<=2*i-1;j++)
    {
        cout<<"*";
    }
    //space
      for(int j=1;j<=n-i-1;j++)
     {
        cout<<" ";
     }
     cout<<endl;
 }
}
int print8(int n)
{
for(int i=1;i<=n;i++)
 {
    //space
     for(int j=1;j<=i;j++)
     {
        cout<<" ";
     }
    //star
    for(int j=1;j<=2*n-(2*i+1);j++)
    {
        cout<<"*";
    }
    //space
      for(int j=1;j<=i;j++)
     {
        cout<<" ";
     }
     cout<<endl;
 }
}
int print9(int n)
{
 for(int i=1;i<=2*n-1;i++)
 {
    int stars = i;
    if(i > n) stars = 2*n-i;
    for(int j=1;j<=stars;j++)
    {
        cout<<"*";
    }
    cout<<"\n";
 }
}
int main()
{
 int n;
 cout<<"Enter number:";
 cin>>n;
 print9(n);

    return 0;
}