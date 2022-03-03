#include<bits/stdc++.h>
using namespace std;
#define Max 200*1000+1

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("ou.txt","w",stdout);
	#endif

	int n;
	bool flag= true ;
	cin>>n;
	vector<int>vec(Max);

	for(int i = 0 ;i<n;i++)
	{
		int x ;
		cin>>x;
		++vec[x];
		if(vec[x]>2)
		{
			flag = false;
		}
	}
	if(flag == false)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<"YES"<<endl<<count(vec.begin(),vec.end(),2)<<endl;
	for(int i = 0;i<=Max;i++)
	{
		if(vec[i]==2)
		{
			cout<<i<<" ";
			--vec[i];
		}
	}
	cout<<endl<<count(vec.begin(),vec.end(),1)<<endl;
	for(int i=Max;i>=0;i--)
	{
		if(vec[i]==1)
		{
			cout<<i<<" ";
			--vec[i];
		}
	}
	cout<<endl;
	return 0;
}
