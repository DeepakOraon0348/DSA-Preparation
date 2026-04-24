#include<iostream>
using namespace std;

void  print(int &n){
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<ch;
            ch++;
        }
        ch--;
        for(int l=i-1;l>=1;l--){
            ch--;
            cout<<ch;
        }
        cout<<endl;
    }
}
int main(){
    int n=9;
    print(n);

    return 0;
}