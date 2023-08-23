#include<iostream>
using namespace std;
// int main()
// {
//     int a,b,c=0;
//     cout<<"enter the a : \n";
//     cin>>a;
//     cout<<"enter the b : \n";
//     cin>>b;
//     c=a;
//     a=b;
//     b=c;
//     cout<<"after swapping x="<<a<<",y="<<b;
// }

int main()
{
    int a,b;
    cout <<"enter a : \n";
    cin>>a;
    cout <<"enter b : \n";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping a="<<a<<",b"<<b;
}