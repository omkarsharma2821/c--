#include<iostream>
using namespace std;

void print(int n){
    if(n<1)
    return;
    print(n-1);  //backtracking is when 
    cout<<n<<endl;
}

int main(){
    cout<<"Enter the value of n :"<<endl;
    int n;
    cin>>n;
    print(n);
}