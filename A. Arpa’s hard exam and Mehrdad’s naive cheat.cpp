// url = https://codeforces.com/problemset/problem/742/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long res=1,base=1378,power;
    cin>>power;
    while(power){
        if(power%2==1){
            res=(res*base)%10;
            power--;
        }
        else{
            base=(base*base)%10;
            power/=2;
        }
    }
    cout<<res<<endl;
    return 0;
}
