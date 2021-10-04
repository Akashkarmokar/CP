#include <bits/stdc++.h>
using namespace std;


int main(){
	int n; cin>>n;
	vector<pair<int,int> > a;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		a.push_back(make_pair(x, i+1));
	}
	sort(a.begin(),a.end(),greater<pair<int,int>>());
	cout<<(int)a[1].second<<endl;
	return 0;
}