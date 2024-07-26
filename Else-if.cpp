// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"enter the marks : ";
//     int n;
//     cin>>n;
//     if(n>=91 && n<=100){
//         cout<<"Excellent";
//     }
//     if(n>=81 && n<=90){
//         cout<<"very good";
//     }
//     if(n>=71 && n<=80){
//         cout<<"good";
//     }
//     if(n>=61 && n<=70){
//         cout<<"can do better";
//     }
//     if(n>=51 && n<=60){
//         cout<<"average";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the marks : ";
    int n;
    cin>>n;
    if(n>=91){
        cout<<"Excellent";
    }
    else{
        if(n<=81){
            cout<<"very good";
        }
        else{
            if(n>=71){
                cout<<"good";
            }
            else{
                if(n>=61){
                    cout<<"can do better";
                }
                else{
                    if(n>=51)
                    {
                        cout<<"averag";
                    }
                    else{
                        if(n>=41){
                            cout<<""
                        }
                    }
                }
            }
        }
    }
    return 0;
}