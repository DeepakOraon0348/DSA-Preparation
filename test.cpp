#include<iostream>
using namespace std;
int main(){
    // int n=5;
    // for(int i=0;i<n;i++){
    //     for(int k=0;k<=i;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n-1;i>=1;i--){
    //     for(int k=0;k<i;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}