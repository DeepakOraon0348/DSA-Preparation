#include <iostream>
using namespace std;
int main()
{
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

    // int n=5;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //           cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    // int n=5;

    // for(int i=0;i<n;i++){
    //     char ch='A';
    //     for(int j=0;j<=i;j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     ch--;
    //     for(int k=0;k<i;k++){
    //         ch--;
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

    // int n=5;
    // for(int i=0;i<=n-1;i++){
    //     char ch='A'+n-i-1;
    //     for(int j=0;j<=i;j++){
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // int n=5;
    // for(int i=n;i>=1;i--){
    //     for(int j=0;j<i;j++){
    //         cout<<"*";
    //     }
    //     for(int k=0;k<(n-i)*2;k++){
    //         cout<<" ";
    //     }
    //     for(int l=0;l<i;l++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int k=0;k<(n-i)*2-2;k++){
    //         cout<<" ";
    //     }
    //     for(int l=0;l<=i;l++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int n=5;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     for(int k=0;k<(n-i)*2-2;k++){
    //         cout<<" ";
    //     }
    //     for(int l=0;l<=i;l++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n-1;i>=1;i--){
    //     for(int j=0;j<i;j++){
    //         cout<<"*";
    //     }
    //     for(int k=0;k<(n-i)*2;k++){
    //         cout<<" ";
    //     }
    //     for(int l=0;l<i;l++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // return 0;

 
        string s;
        cin >> s;

        // precompute:
        int hash[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            hash[s[i] - 'a']++;
        }

        int q=5;
        // cin >> q;
        while (q--)
        {
            char c;
            cin >> c;
            // fetch:
            cout << hash[c - 'a'] << endl;
        }
        return 0;
}