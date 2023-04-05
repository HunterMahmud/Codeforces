//url = https://codeforces.com/problemset/problem/282/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    int res = 0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[0]=='X'){
            if(s[1]=='+') res++;
            else res--;
        }
        else{
            if(s[0]=='+') ++res;
            else --res;
        }
    }
    cout<<res;
}
