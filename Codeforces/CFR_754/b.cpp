#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int n; cin>>n;
	string s,t; cin>>s;
	t = s;
	sort(t.begin(),t.end());
	vector<int> ans;
	for(int i=0;i<n;i++){
		if(s[i]!=t[i]){
			ans.push_back(i+1);
		}
	}
	if(ans.size()){
		cout<<1<<"\n";
		cout<<ans.size()<<" ";
		for(auto it:ans){
			cout<<it<<" ";
		}
		cout<<"\n";
	}else{
		cout<<0<<"\n";
	}
}

int main(){
	int tc = 1;
	cin>>tc; 
	while(tc--){
		run_case();
	}
	return 0;
}