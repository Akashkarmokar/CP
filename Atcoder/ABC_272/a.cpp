#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve(){
	int n; cin>>n;
	int sum = 0;
	int x; 
	for(int i=0;i<n;i++){
		cin>>x;
		sum+=x;
	}
	cout<<sum<<endl;
}

int main(){
	int tc = 1;
	// cin>>tc;
	while(tc--){
		solve();
	}
}