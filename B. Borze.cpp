//url = https://codeforces.com/problemset/problem/32/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[201];
    cin>>s;
    int l = sizeof(s)/sizeof(s[0]);
    for(int i=0;i<l;i++){
        if(s[i]=='.') cout<<'0';
        else if(s[i]=='-' && s[i+1]=='.'){cout<<'1'; i+=1;}
        else if(s[i]=='-' && s[i+1]=='-'){cout<<'2'; i+=1;}
    }
    
    return 0;
}

