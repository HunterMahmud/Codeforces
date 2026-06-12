#include <bits/stdc++.h>
using namespace std;

void binarySearch(int* arr, int len, int target){
    int l= 0, r = len-1;
    int m = r/2;
    while(l <= r){
        if(arr[m] == target){
            cout<<"YES"<<endl;
            return;
        }
        else if(arr[m] > target){
            r = m-1;
            m = (r+l)/2;
        } else {
            l = m+1;
            m = (r+l)/2;
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main()
{
    int n,k;
    cin>>n>>k;
    
    int num[n];
    for(int i=0; i<n; i++) cin>>num[i];
    for(int i=0; i<k; i++) {
        int target;
        cin>>target;
        binarySearch(num, n, target);
    }
    
    return 0;
}
