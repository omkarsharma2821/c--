#include<iostream>
using namespace std;
void print(int i, int n){
    if(i>n)
    return ;
    cout<<"omkar"<<endl;
    print(i+1,n);
}
int main(){
//  int n= 4;
 int n;

 cin>>n;
 print(1,n);

}