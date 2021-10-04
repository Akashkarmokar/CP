#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



void run_case(){
	int n,q; cin>>n>>q;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];

	for(int i=0;i<q;i++){
		int x; cin>>x;

		int pos = find(a.begin(),a.end(),x)-a.begin();
		cout<<pos+1<<endl;
		rotate(a.begin(), a.begin()+pos, a.begin()+pos+1);
	}
}

int main(){
	int tc = 1;
	// cin>>tc;
	while(tc--){
		run_case();
	}

	return 0;
}