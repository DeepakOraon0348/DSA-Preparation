#include<iostream>
using namespace std;

void print(int &n){
    char ch='A';
    for(int i=1;i<=n;i++){
        ch=ch+n-i;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        ch='A';
        cout<<endl;
    }
}
int main(){
    int n=5;
    print(n);
    
    return 0;
}