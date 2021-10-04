#include <bits/stdc++.h>
using namespace std;

void run_case(){
	int n,x;
	cin>>n>>x;
	vector<int> a(n);
	int pre = 0, mx = -1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		pre+=a[i];
		if(pre%x){
			mx = i+1;
		}
	}
	int suf = 0;
	for(int i=n-1;i>=0;i--){
		suf+=a[i];
		if(suf%x){
			mx = max(mx,n-i);
		}
	}
	cout<<mx<<endl;
}


int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}