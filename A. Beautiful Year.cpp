//url = https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool i = true;
    while(i){
        n++;
        string s = to_string(n);
        int a=s[0]-'0',b=s[1]-'0', c=s[2]-'0', d=s[3]-'0';
        if(a!=b && a!=c && a!=d && b!=c && b!=c && b!=d && c!=d){
            cout<<n;
            return 0;
        }
    }
    
    return 0;
}

