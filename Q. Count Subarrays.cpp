// url = https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q

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
        for(int i=0; i<n; i++) cin>>ar[i];
        int subCnt = n;
        for(int i=2; i<=n; i++){
            for(int j=0; j<=n-i; j++){
                int flag = true;
                for(int k=j; k<i+j-1; k++){
                    if(ar[k]>ar[k+1]){
                        flag = false;
                        break;
                    }
                }
                if(flag) subCnt++;
            }
        }
        cout<<subCnt<<'\n';
    }
    return 0;
}