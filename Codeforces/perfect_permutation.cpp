#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("ou.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	if(n%2==0)
	{
		for(int i=1;i<=n;i++)
		{
			if(i%2==0){
				cout<<i-1<<" ";
			}
			else
			{
				cout<<i+1<<" ";
			}
		}
		printf("\n");
	}
	else{
		cout<<"-1"<<endl;
	}
	return 0;
}