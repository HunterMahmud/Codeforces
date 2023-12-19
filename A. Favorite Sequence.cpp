// url = https://codeforces.com/problemset/problem/1462/A

#include <bits/stdc++.h>

using namespace std;
void solve(int ar[],int n){
    int r = 0;
    int l = n-1;
    int i=0;
    while(r<l){
        cout<<ar[r]<<' ';
        cout<<ar[l]<<' ';
        r++;
        l--;
    }
    if(n%2) cout<<ar[r]<<endl;
    else cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n+1];
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        solve(ar,n);
    }
    
    return 0;
}
