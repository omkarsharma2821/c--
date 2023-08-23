#include<iostream>
using namespace std;
int main(){

    int amt;
    int n2000,n500,n200,n100,n50,n20,n10,n1;
    n2000 = n500 = n200 = n100 = n50 =n20 = n10 = n1 = 0;

    cout<<"enter the amount :"<<endl;
    cin>>amt;

    switch(amt>=2000){
        case 1:
        n2000 = amt/2000;
        amt = amt - n2000*2000;
        break;
    }
    switch(amt>=500){
    case 1:
    n500 = amt/500;
    amt = amt - n500*500;
    break;
    }
    switch(amt>=200){
    case 1:
    n200 = amt/200;
    amt = amt - n200*200;
    break;
    }
    switch(amt>=100){
    case 1:
    n100 = amt/100;
    amt = amt - n100*100;
    break;
    }
    switch(amt>=50){
    case 1:
    n50 = amt/50;
    amt = amt - n50*50;
    break;
    }
    switch(amt>=20){
    case 1:
    n20 = amt/20;
    amt = amt- n20*20;
    break;
    }
    switch(amt>=10){
    case 1:
    n10 = amt/10;
    amt = amt -  n10*10;
    break;
    }
    switch(amt<=10){
    case 1:
    n1 = amt/1;
    amt = amt -  n1*1;
    break;
    }
    cout<<"2000 = "<<n2000<<endl;
    cout<<"500 = "<<n500<<endl;
    cout<<"200 = "<<n200<<endl;
    cout<<"100 = "<<n100<<endl;
    cout<<"50 = "<<n50<<endl;
    cout<<"20 = "<<n20<<endl;
    cout<<"10 = "<<n10<<endl;
    cout<<"1 = "<<n1<<endl;
}
