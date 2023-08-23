#include<iostream>
using namespace std;
int main()
{
    // // Factorial
    // int n,fact;
    // cout<<"Enter the no whose fact is calculated : "<<endl;
    // cin>>n;
    // for(int i = 1; i<n; i++)
    // fact = n * (n-i);
    // cout<<"the factorial of "<<n<<"is"<<fact;

// swapping
//     int a,b;
//     cout<<"enter numbers :"<<endl;
//     cin>>a>>b;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"no after swapping are "<<a<<"and"<<b;

// sum of digits of no
   int n,r,sum=0;
    while(n>0)
    {
        r=n%10;
        sum = sum+r;
        n = n/10;
    }
    cout<<sum;
}

    
