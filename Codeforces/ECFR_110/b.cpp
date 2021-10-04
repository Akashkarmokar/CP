#include<bits/stdc++.h>
using namespace std;

bool cmp(const int& a,const int& b){
	return a%2 < b%2;
}

void solve() {
	int n;cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end(),cmp);
	int count = 0;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++)
		{
			if(__gcd(v[i],2*v[j])>1)
			{
				count++;
			}
		}
		// cout<<count<<endl;
	}
	cout<<count<<endl;
}


int main()
{
	int tc; cin>>tc;
	while(tc--) {
		solve();
	}
	return 0;
}