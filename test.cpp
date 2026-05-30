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
    // int n=5;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         if((i+j)%2==0){
    //             cout<<"1";
    //         }
    //         else{
    //             cout<<"0";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n=5;
    // int j;
    // for(int i=1;i<n;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     for(int k=0;k<(n-i)*2-2;k++){
    //         cout<<" ";
    //     }
    //     for(int l=j-1;l>=1;l--){
    //         cout<<l;
    //     }
    //     cout<<endl;
    // }

    // int n=5;
    // int count=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    int n=5;
    for(int i=n;i>=1;i--){
        char ch='A';
        for(int j=0;j<i;j++){
              cout<<ch;
              ch++;
        }
        cout<<endl;
    }
    return 0;
}