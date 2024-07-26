#include<iostream>
using namespace std;

int main(){
    cout<<"enter the no. : ";
    int n;
    cin>>n;
    // if((n%5==0 || n%3==0) && n%15!=0){
    //     cout<<"is divisible by 5 or 3";
    // }
    // else{
    //     cout<<" ont divisible by 15";
    // }
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"the no. is divisibel by 5 or 3";
        }
    }
    else{
        cout<<"not matching no.";
    }
    return 0;
}