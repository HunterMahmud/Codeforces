// url = https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P


#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;
        int ar[n];
        int cnt = 0;
        int isPossible = true;
        for(int i=0; i<n; i++) {
            cin>>ar[i];
            if(isPossible){
                if(ar[i]%2){
                    isPossible = false;
                }
                else{
                    ar[i] /= 2;
                }
            }
        }
        if(isPossible) cnt++;
        while(isPossible){
            for(int i=0; i<n; i++){
                if(ar[i] % 2 == 0){
                    ar[i] /=2;
                }
                else isPossible = false;
            }
            if(isPossible) cnt++;
        }
        
        cout<<cnt<<endl;
    return 0;
}