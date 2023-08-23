#include<iostream>
using namespace std;
int main()
{
    int i,a=0,b=1,c=0,n;
    cout<<"enter the no upto which you want to print fibonacci series : "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
    cout<<c<<" ";
    a=b;
    b=c;
    c=a+b;
    }
}
