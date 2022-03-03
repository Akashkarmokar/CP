#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("ou.txt","w",stdout);
	#endif

	int n ;
	cin>>n;
	string s;
	cin>>s;
	int counter = 0;
	for(int i = 0;i<n-10;i++)
	{
		if(s[i]=='8'){
			counter++;
		}
	}
	if(counter>(n-11)/2){
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}