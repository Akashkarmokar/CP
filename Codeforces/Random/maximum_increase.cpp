#include <bits/stdc++.h>
using namespace std;



int a[100010];


void solve(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	int now = 0;
	for(int i = 1; i <= n; i++) {
		if(a[i] > a[i-1]) ++now;
		else now = 1;
		ans = max(ans, now);
	}
	cout << ans << endl;
}

int main()
{
	int tc=1;
	// cin>>tc;
	while(tc--){
		solve();
	}
	return 0;
}