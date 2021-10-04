#include <bits/stdc++.h>
using namespace std;


void run_case(){
	int n; cin>>n;
	vector<int> a(n),pos(n+1);

	for(int i=0;i<n;i++){
		cin>>a[i];
		pos[a[i]] = i;
	}

	int lastIdx = n;

	for(int i=n;i>0;i--){
		if(pos[i]>=lastIdx){
			continue;
		}
		for(int j=pos[i];j<lastIdx;j++){
			cout<<a[j]<<" ";
		}
		lastIdx = pos[i];
	}
	cout<<endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}