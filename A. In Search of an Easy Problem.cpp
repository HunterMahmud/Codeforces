// url = https://codeforces.com/problemset/problem/1030/A

#include<iostream>
using namespace std;

int main()
{
    bool flag = false;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1) flag = true;
    }
    if(flag) cout<<"Hard"<<endl;
    else cout<<"Easy"<<endl;
    return 0;
}
