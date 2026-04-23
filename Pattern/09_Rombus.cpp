#include<iostream>
using namespace std;

int print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=(i*2)-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=(i*2)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n=6;
    print(n);

    return 0;
}