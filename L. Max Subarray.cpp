// url = https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0; i<n; i++) {
            cin>>ar[i];
            cout<<ar[i]<<' ';
        }
        
        for(int i=2; i<=n; i++){
            for(int j=0; j<=n-i; j++){
                int mx = INT_MIN;
                for(int k=j; k<i+j; k++){
                    if(ar[k]>mx){
                        mx = ar[k];
                    }
                }
                cout<<mx<<' ';
            }
        }
        cout<<'\n';
    }
    return 0;
}