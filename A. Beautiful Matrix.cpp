//url = https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[5][5];
    int a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>ar[i][j];
            if(ar[i][j]==1) a=i,b=j;
        }
    }
    cout<<abs(2-a)+abs(2-b)<<endl;
    
    return 0;
}

