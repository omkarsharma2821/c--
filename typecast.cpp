#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"The memory used by varibale : \n";
    int size = sizeof(a);
    cout<< size<<endl;

    /*type casting*/

    int m = 'A';
    cout<<m<<endl;

    // reference variable
    int x=5;
    int & y=x;
    cout<<x<<endl<<y;

}