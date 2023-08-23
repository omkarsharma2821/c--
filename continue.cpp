#include<iostream>
using namespace std;
int main()
{
    // use of break and continue statement
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5)
        {
            continue;
        }
    cout<<5*i<<endl;
    }
}