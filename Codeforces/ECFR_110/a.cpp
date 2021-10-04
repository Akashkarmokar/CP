#include<bits/stdc++.h>
using namespace std;



void solve() {
	vector<int>v(4);
	for(int i=0;i<4;i++){
		cin>>v[i];
	}
	int a = max(v[0],v[1]);
	int b = max(v[2],v[3]);
	sort(v.begin(),v.end());
	if(a==v[2]|| a==v[3] && (b==v[2] || b==v[3]))
	{
		cout<<"YES"<<endl;
	}else
	{
		cout<<"NO"<<endl;
	}

}

int main()
{
	int tc; cin>>tc;
	while(tc--) {
		solve();
	}
	return 0;
}