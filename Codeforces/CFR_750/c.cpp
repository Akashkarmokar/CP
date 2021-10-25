#include <bits/stdc++.h>
using namespace std;

int check(string& s,int ch){ // check min req for every single char from a-z
	int n = s.size();
	int l = 0;
	int r = s.size()-1;
	int cnt = 0;
	while(l<=r){
		if(s[l]==s[r]){
			l++;
			r--;
		}else if(s[l]==(char)'a'+ch){
			cnt++;
			l++;
		}else if(s[r]==(char)'a'+ch){
			cnt++;
			r--;
		}else{
			cnt=n+1;
			break;
		}
	}
	return cnt;
}

void run_case(){
	int n;
	string s;
	cin>>n>>s;
	int ans = n+1;
	for(int ch=0;ch<26;ch++){
		ans = min(ans,check(s,ch));
	}
	if(ans==n+1)
		ans = -1;
	cout<<ans<<endl;
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}