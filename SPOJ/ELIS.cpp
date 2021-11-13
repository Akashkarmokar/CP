#include <bits/stdc++.h>
using namespace std;

vector<int> LisDp;

int LisFrom(int index,vector<int>& v){
	if(LisDp[index]!=-1){
		return LisDp[index];
	}
	int ans = 0;
	for(int j=index+1;j<v.size();j++){
		if(v[j]>v[index]){
			ans = max(ans,LisFrom(j, v));
		}
	}
	LisDp[index] = 1 + ans;
	return LisDp[index];
}

int main(){
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int ans = 0;
	LisDp.assign(n,-1);
	for(int i=0;i<n;i++){
		ans = max(ans,LisFrom(i,v));
	}
	cout<<ans<<endl;
	return 0;
}