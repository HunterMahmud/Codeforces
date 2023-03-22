#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]+b[i]==c[i]) cout<<'+'<<endl;
        else cout<<'-'<<endl;
    }
}
