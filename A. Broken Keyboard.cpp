// url = https://codeforces.com/contest/1251/problem/A

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        set<char> ans;
        cin>>s;
        int r=0, l = s.size()-1;
        while(r<l){
            if(s[r]!=s[r+1]){
                ans.insert(s[r]);
                r++;
            }
            else{
                r+=2;
            }
        }
        if(r==l) ans.insert(s[l]);
        for(auto i: ans) cout<<i;
        cout<<endl;
    }
    return 0;
}
