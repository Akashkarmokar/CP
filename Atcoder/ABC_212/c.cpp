#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <set>
using namespace std;


// solutin with two pointer method

void run_case(){
	int n,m; cin>>n>>m;
	vector<int> a(n),b(m);

	for(int i=0;i<n;i++) cin>>a[i];

	for(int i=0;i<m;i++) cin>>b[i];

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	int x =0;
	int y =0;
	int ans = INT_MAX;
	while(x<n && y<m){
		ans = min(ans,abs(a[x]-b[y]));
		if(a[x]>b[y]){
			y++;
		}else{
			x++;
		}
	}
	cout<<ans<<endl;
}


int main(){
	int tc = 1;
	// cin>>tc;

	while(tc--){
		run_case();
	}

	return 0;
}