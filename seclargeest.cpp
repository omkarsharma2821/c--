#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int seclargest(int arr[], int n){
    int i;
    int largest = INT8_MIN;
    int seclargest = INT8_MIN;
    for(i = 0; i<n; i++){
        if(arr[i]>largest){
            seclargest = largest;
            largest = arr[i];
        }
    }
    return seclargest;


}


int main(){

    int arr[1000];
    int n;
    cout<<"enter the array size : "<<endl;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
int ans= seclargest(arr,n);
cout<<ans;
}