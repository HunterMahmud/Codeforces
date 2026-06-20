// url = https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long result=0;
    for(int i=0; i<n; i++){
        int input;
        cin>>input;
        result+=input;
    }
    if(result > 0) cout<<result<<endl;
    else cout<< -result<<endl;
    return 0;
}
