#include<iostream>
using namespace std;

void print(int &n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }
        for(int l=1;l<=i;l++){
            cout<<"*";
        }    
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }
        for(int l=i;l>=1;l--){
            cout<<"*";
        }    
        cout<<endl;
    }
}
int main(){
    int n=5;
    print(n);

    return 0;
}