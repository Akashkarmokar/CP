#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("ou.txt","w",stdout);
	#endif
	
	int n;
	string s;
	cin>>n;
	cin>>s;
	for(int i =1 ;i<n;i++){
		if(s[i-1]>s[i])
		{
			cout<<"YES"<<endl<<i<<" "<<i+1<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
