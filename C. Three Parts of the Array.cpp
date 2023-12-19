// url = https://codeforces.com/problemset/problem/1006/C


#include <bits/stdc++.h>

using namespace std;
void solve(int ar[],int n){
    int r = 0;
    int l = n-1;
    long long sum1=0,sum2=0,ans=0;
    while(r<=l){
        if(sum1<sum2){
            sum1 += ar[r];
            r++;
        }
        else{
            sum2 += ar[l];
            l--;
        }
        if(sum1==sum2) ans = sum1;
    }
    cout<<ans<<endl;
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
