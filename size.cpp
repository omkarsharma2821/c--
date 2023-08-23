#include <iostream>
using namespace std;
int main()
{
    int a = 125288;
    int size = sizeof(a);
    cout<<"size of a is "<<size<<endl;

    float b;
    float size1 = sizeof(b);
    cout<<"size of b is "<<size1<<endl;

    double c;
    double size2 = sizeof(c);
    cout<<"size of c is "<<size2;
}