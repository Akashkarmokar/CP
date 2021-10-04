#include <bits/stdc++.h>
#include <vector>
using namespace std;


void run_case(){
	int n; cin>>n;
	int sum = 0 , f_mx =0, s_mx = 0;
	vector<pair<int,int>> a ;
	for(int i=0;i<n;i++){
		int x, y; cin>>x>>y;
		a.push_back(make_pair(x,y));
		sum+=x;
		if(y>f_mx){
			s_mx = f_mx;
			f_mx = y;
		}else if(y>s_mx){
			s_mx = y;
		}
	}

	for(int i=0;i<n;i++){
		if(a[i].second == f_mx){
			cout<<(sum-a[i].first)*s_mx<<" ";
		}else{
			cout<<(sum-a[i].first)*f_mx<<" ";
		}
	}
	cout<<endl;
}

int main(){
	int tc = 1;
	// cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}