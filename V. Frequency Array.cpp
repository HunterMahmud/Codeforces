// url = https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
    cin>>n>>m;
    int ar[m+1]={};
    int t;
    
    for(int i=0; i<n; i++) {
        cin>>t;
        ar[t]++;
    }
    for(int i=1; i<=m; i++){
        cout<<ar[i]<<'\n';
    }
    
    return 0;
}