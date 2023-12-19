// url = https://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>

using namespace std;
void solve(int ar[],int n){
    int s=0, d=0;
    int r = 0;
    int l = n-1;
    while(r<l){
        if(ar[r]>ar[l]){
            s+=ar[r];
            r++;
        }
        else{
            s+=ar[l];
            l--;
        }
        if(ar[r]>ar[l]){
            d+=ar[r];
            r++;
        }
        else{
            d+=ar[l];
            l--;
        }
    }
    if(n%2) s+=ar[r];
    cout<<s<<' '<<d<<endl;
}

int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    solve(ar,n);
    
    return 0;
}
