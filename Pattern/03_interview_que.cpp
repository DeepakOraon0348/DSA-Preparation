#include<iostream>
using namespace std;

int main(){
    int n=3;
    int num1=1;
    int num2=n*(n+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num1<<" ";
            num1++;
        }
        for(int s=1;s<=(n-i)*2-1;s++){
            cout<<"   ";
        }
        for(int k=1;k<=i;k++){
            cout<<num2<<" ";
            num2--;
        }
        cout<<endl;
    }
    
    return 0;
}