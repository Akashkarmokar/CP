#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m,x,count=0;
	scanf("%d %d",&n,&m);
	if(m%n==0){
		x = m/n;
		while(x%2==0){
			x = x/2;
			count++;
		}
		while(x%3==0){
			x = x/3;
			count++;
		}
		if(x==1){
			cout<<count<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
	else{
		cout<<"-1"<<endl;
	}
	return 0;
}
