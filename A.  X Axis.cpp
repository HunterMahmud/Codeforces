// url = https://codeforces.com/contest/1986/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int c;
   cin>>c;
   for(int i=0; i<c; i++){
       int x[3];
       cin>>x[0]>>x[1]>>x[2];
       int lowest = INT_MAX;
       for(int j=0; j<3; j++){
           int low = abs(x[j] - x[0]) + abs(x[j] - x[1]) + abs(x[j] - x[2]);
        //   cout<<low<<" "<<lowest<<endl;
           if( low < lowest) lowest = low;
       }
       cout<<lowest<<endl;
   }

    return 0;
}
