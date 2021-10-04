#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e9 + 5;

void run_case(){
	int n,t,c; cin>>n>>t>>c;
	vector<int> a;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		a.push_back(x);
	}
	a.push_back(MAX);
	int lidx = 0;
	long long ans = 0;
	for(int i=0;i<=n;i++){
		if(a[i]>t && (i-lidx)>=c){
			ans+=max(0,((i-lidx)-c+1));
			lidx=i+1;
		}else if(a[i]>t && (i-lidx)<c){
			lidx = i+1;
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