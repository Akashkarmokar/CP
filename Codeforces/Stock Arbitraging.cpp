#include<bits/stdc++.h>
using namespace std;

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("ou.txt","w",stdout);
	#endif

	int n,m,r;
	cin>>n>>m>>r;
	int p = r;
	int n_ar[n];
	int m_ar[m];
	for(int i = 0 ;i<n;i++)
	{
		cin>>n_ar[i];
	}
	for(int i = 0 ;i<m;i++)
	{
		cin>>m_ar[i];
	}
	sort(n_ar,n_ar+n);
	sort(m_ar,m_ar+m,greater<int>());
	int cur = 0;
	int share = r/n_ar[0];
	r = r - (share * n_ar[0]);
	r = r + (share*m_ar[0]);
	if(r<p){
		cout<<p<<endl;
	}
	else
	{
		cout<<r<<endl;
	}

	return 0 ;

}