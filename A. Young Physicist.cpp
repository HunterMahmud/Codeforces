//url = https://codeforces.com/problemset/problem/69/A
#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n][3];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>ar[i][j];
        }
    }
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++)
    {
        x+=ar[i][0];
        y+=ar[i][1];
        z+=ar[i][2];
    }
    if(x==0 && y==0 && z==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}

