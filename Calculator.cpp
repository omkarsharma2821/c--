#include<iostream>
#include<math.h>
using namespace std;
int main(){

    float a,b;
    char op;
    cout<<"Enter First Number : "<<endl;
    cin>>a;
    cout<<"Enter Second Number : "<<endl;
    cin>>b;

    cout<<"Addition (+)"<<endl;
    cout<<"Subtraction (-)"<<endl;
    cout<<"Multiplication (*)"<<endl;
    cout<<"Division (/)"<<endl;
    cout<<"Power (^)"<<endl;

    cout<<"Choose The Operation :"<<endl;
    cin>> op;

    switch (op)
    {
        case '+': 
        cout<<"Answer "<<(a+b)<<endl;
        break;

        case '-':
        cout<<"Answer "<<(a-b)<<endl;
        break;

        case '*':
        cout<<"Answer "<<(a*b)<<endl;
        break;

        case '/':
        cout<<"Answer "<<(a/b)<<endl;
        break;

        case '^':
        cout<<"Answer "<<pow(a,b)<<endl;
        break;
 
        default :
        cout<<"invalid op";
    }
        return 0;
}