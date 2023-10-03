#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout<<"Size : "<< v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>v(7,10);
    printVec(v);
}