#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int n,k; cin>>n>>k;
	string s; cin>>s;
	unordered_map<char,int> mp;
	set<char> mySet;

	for(int i=0;i<n;i++){
		mp[s[i]]++;
	}
	int dorkar = 0;
	int free = 0;
	for(int i=0;i<n;i++){
		if(mySet.insert(s[i]).second){
			if(!free){
				dorkar++;
			}else{
				free--;
			}
		}
		mp[s[i]]--;
		if(mp[s[i]]==0){
			free++;
			mySet.erase(mySet.find((s[i])));
		}
		// cout<<free<<" "<<dorkar<<endl;
	}
	if(dorkar>k){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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