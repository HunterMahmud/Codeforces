//url = https://codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>s;
	int len = s.size();
	if(len <= 10) cout<<s<<endl;
	else{
	    cout<<s[0]<<len-2<<s[len-1]<<endl;
	}
	}
	return 0;
}
