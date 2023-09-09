#include<iostream>
using namespace std;

int PalindromicArray(int arr[],int n){
    for(int i = 0; i<n; i++){
        string str = to_string(arr[i]);
        int len = str.length();
        int start = 0;
        int end = len-1;
        while(start<=end){
            swap(str[start],str[end]);
            if(str[start]!=str[end])
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){

int size;
int arr[100];
cout<<"Enter the array size :"<< endl;
cin>>size;
for(int i = 0; i<size; i++){
    cin>>arr[i];
}
PalindromicArray(arr,size);
// cout<<ans;
}