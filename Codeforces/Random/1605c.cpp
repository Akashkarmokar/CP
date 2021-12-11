#include <bits/stdc++.h>
using namespace std;


void run_case(){
	int n; cin>>n;
	string s; cin>>s;
	int cnt = 0;
	bool ok = false;
	for(int i=0;i<n;i++){
		if(s[i]=='a'){
			cnt++;
		}
		if(i>0){
			if(s[i-1]=='a' && s[i]=='a'){
				ok = true;
			}
		}
	}
	if(cnt>1){
		if(ok){
			cout<<2<<endl;
		}else{
			int ans = 4;
			for(int i=0;i<n;i++){
				if(s[i]=='a'){
					for(int j=i+1;j<n;j++){
						if(s[j]=='a'){
							ans = min(ans,j-i+1);
							break;
						}
					}
				}
			}
			cout<<ans<<endl;
		}
	}else{
		cout<<"-1"<<endl;
	}
}

int main(){
	int tc =1 ;
	cin>>tc;
	while(tc--){
		run_case();
	}
}