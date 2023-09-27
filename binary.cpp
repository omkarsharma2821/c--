#include<iostream>
using namespace std;
int binarySearch(int n, int arr[], int k){
    int i = 0;
    int j = n-1;
    int mid = (i+j)/2;
    while(i<=j){
        if(arr[mid]==k)
        return mid;
        else if (arr[mid]<k)
        i = mid+1;
        else if(arr[mid]>k)
        j = mid-1;
    }
    return -1;
}
int main(){
    int n,k;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    cout<<"Enter array element :"<<endl;
    int arr[100];
    for(int i = 0 ; i  < n; i++)
    cin>>arr[i];
    cout<<"Enter the key : "<<endl;
    cin>>k;
    int ans = binarySearch(n,arr,k);
    if(ans!=-1){
        cout<<"Found"<<ans<<endl;
    }else{
        cout<<"Not found"<<ans<<endl;
    }
    return 0;
}
