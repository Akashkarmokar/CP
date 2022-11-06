#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin>>n;
	vector<int> a(n);
	vector<char> c(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	map<int,char> mp;
	bool isOk = true;
	for(int i=0;i<n;i++){
		if(mp.find(a[i]) == mp.end()){
			mp[a[i]] = c[i];
		}else if(mp[a[i]] != c[i]){
			isOk = false;
			break;
		}
	}
	cout<< (isOk ? "YES\n" : "NO\n");
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}