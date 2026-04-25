#include<iostream>
using namespace std;

void print(int &n){
    for(int i=1;i<=n;i++){
        if(i==n || i==1){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int k=1;k<=1;k++){
                cout<<"*";
            }
            for(int l=1;l<=n-2;l++){
                cout<<" ";
            }
            for(int m=1;m<=1;m++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}
int main(){
    int n=10;
    print(n);
}