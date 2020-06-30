#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,res=0;
	string s;
	cin>>n>>s;
	for(int i =1;i<=n;i++){
		if(s[i-1]%2==0){
			res+=i;
		}
	}
	cout<<res<<endl;
	return 0;
}
