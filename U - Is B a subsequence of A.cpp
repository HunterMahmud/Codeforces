// url = https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ar1[n];
    int ar2[m];
    
    for(int i=0; i<n; i++){
        cin>>ar1[i];
    }
    for(int i=0; i<m; i++){
        cin>>ar2[i];
    }
    bool fnd = false;
    for(int i=0; i<n && !fnd  && (n-i)>=m; i++){
        if(ar1[i] == ar2[0]){
            int k = 0;
            for(int j=i; j<n; j++){
                if(ar1[j] == ar2[k]){
                    k++;
                }
            }
            if(k == m){
                fnd = true;
                break;
            }
        }
    }
    if(fnd) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
