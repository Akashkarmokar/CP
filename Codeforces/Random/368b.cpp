#include <bits/stdc++.h>
#include <vector>
using namespace std;


void run_case(){
	int n,m; cin>>n>>m;

	vector<int> a(n),sufix(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	set<int> s;
	for(int i=n-1;i>=0;i--){
		if(s.find(a[i])==s.end()){
			s.insert(a[i]);
			sufix[i]=s.size();
		}else{
			sufix[i] = s.size();
		}
	}

	// for(auto it:sufix){
	// 	cout<<it<<" ";

	// }
	// cout<<endl;
	for(int i=0;i<m;i++){
		int q; cin>>q;
		q--; 
		cout<<sufix[q]<<endl;
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