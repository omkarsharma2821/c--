#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int marks[] = {20,21,22,23};
    // cout<<marks[3];

    // // print array element using loop
    // for(int i=0;i<4;i++)
    // cout<<marks[i]<<endl;

    // print array element using while loop 
    // while(i<4)
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // }
    

    // printing array elment using do while loop 

    do
    {
        cout<<marks[i]<<endl;
        i++;
    }
    while(i<4);

}