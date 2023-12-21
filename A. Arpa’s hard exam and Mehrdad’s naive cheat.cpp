// url = https://codeforces.com/problemset/problem/742/A

/// most optimal solution 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int res=1,base=8,power; // base = 1378 ->  we don't need it. it will give same result as base = 8; and number can be in range of integer. so don't need long long;
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


/// good but not best solution

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
