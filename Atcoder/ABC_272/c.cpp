#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve(){
	int n; cin>>n;
	vector<int> odd, even;
	for(int i=0;i<n;i++){
		int value; cin>>value;
		if(value & 1){
			// odd number
			odd.push_back(value);
		}else{
			even.push_back(value);
		}
	}
	sort(odd.rbegin(),odd.rend());
	sort(even.rbegin(),even.rend());
	int mx = -1;
	if(odd.size() > 1) mx = max(mx,odd[0]+odd[1]);
	if(even.size() > 1) mx = max(mx,even[0]+even[1]);
	cout<<mx<<endl;
}

int main(){
	int tc = 1;
	// cin>>tc;
	while(tc--){
		solve();
	}
}