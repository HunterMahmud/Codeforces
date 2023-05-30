// url = https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i < n; i++){
        cin>>arr[n-1-i];
    }
    for(int i: arr){
        cout<<i<<' ';
    }
    return 0;
}
