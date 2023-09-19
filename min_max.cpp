#include<iostream>
using namespace std;

int getmin(int a[],int n)
{
    int min = INT8_MAX;

    for (int i = 0; i<= n;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    return min;
}


int getmax(int a[],int n){

    int max = INT8_MIN;

    for(int i = 0; i<n ;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    return max;
}


int main(){
    int arr[100];
    int size;
    cout<<"Enter the array size : "<<endl;
    cin>>size;

    cout<<"Enter the array element : ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"maximum no is "<<getmax(arr , size)<<endl;
    cout<<"minimum no is "<<getmin(arr , size)<<endl;
}