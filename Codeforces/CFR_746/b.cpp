#include <bits/stdc++.h>
using namespace std;


void run_case(){
	int n,x; cin>>n>>x;
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i] = a[i];
	}
	sort(b.begin(),b.end());
	bool ok = true;
	for(int i=0;i<n;i++){
		if(i-x<0 && i+x>n-1){
			ok &= (a[i] == b[i]);
		}
	}
	if(ok){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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