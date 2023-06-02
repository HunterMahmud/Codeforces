// url = https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P04


#include <bits/stdc++.h>
using namespace std;

int daughter(string a, string b){
    int total_a = 0, total_b=0;
    bool flag = false;
    for(int i=0;i<a.size();i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        total_a += a[i]-0;
        total_b += b[i]-0;
        if(a[i]!=b[i]) flag = true;
    }
    //cout<<total_a<<' '<<total_b<<endl;
    if(!flag) return 0;
    if(total_a<total_b) return -1;
    if(total_a>total_b) return 1;
    //if(total_a==total_b) return 0;
    return 0;
}

int main()
{
    string a,b;
    cin>>a>>b;
    int res = daughter(a,b);
    cout<<res;
    return 0;
}
