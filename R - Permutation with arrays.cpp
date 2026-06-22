// url = https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar1[n], ar2[n];
    
    for(int i=0; i<n; i++) {
        cin>>ar1[i];
    }
    for(int i=0; i<n; i++){
        cin>>ar2[i];
    }
    bool result = true;
    for(auto i: ar1){
        int isFound = false;
        for(int j=0; j<n; j++){
            if(i == ar2[j]) {
                ar2[j] = -1;
                isFound = true;
                break;
            }
        }
        if(!isFound) {
            result = false;
            break;
        }
    }
    
    if(result) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    
    return 0;
}