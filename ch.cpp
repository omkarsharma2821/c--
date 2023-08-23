#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character : \n";
    cin>>ch;
    if(ch>='A'&&ch<='Z')
    cout<<ch<<" is in upper case"<<endl;
    else if(ch>='a'&&ch<='z')
    cout<<ch<<" is in lower case"<<endl;
    else
    cout<<ch<<" is alphanumeric"<<endl;




}