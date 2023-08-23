#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter a number : "<<endl;
    cin>>n;
    for ( int i = 1; i<n; i++)
    if(n%i==0){
    sum = sum + i;}
    if(sum==n){
    cout<<"perfect numebr";}
    else
    cout<<"not perfect number";
return 0;
}



