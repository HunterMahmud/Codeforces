// url = https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02




#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,result = 0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i < n; i++){
        cin>>arr[i];
    }
    int first,last;
    cin>>first>>last;
    for(int i=first;i<=last; i++){
        result+=arr[i];
    }
    cout<<result;
    return 0;
}
