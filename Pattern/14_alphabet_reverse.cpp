#include<iostream>
using namespace std;

void print(int &n){
    for(int i=n;i>=1;i--){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
int main(){
    int n=6;
    print(n);

    return 0;
}