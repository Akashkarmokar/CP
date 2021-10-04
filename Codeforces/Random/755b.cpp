#include <bits/stdc++.h>
using namespace std;



void run_case(){
	int a,b; cin>>a>>b;
	int n = a+b;
	set<string> s;
	for(int i=0;i<n;i++){
		string x; cin>>x;
		s.insert(x);
	}
	int sz = (int)s.size();
	int k = a+b-sz;
	a-=k;
	b-=k; 
	a+=(k&1);
	if(a>b){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

}

int main(){
	int tc=1;
	// cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}