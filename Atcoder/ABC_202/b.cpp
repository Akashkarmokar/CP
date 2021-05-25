#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	reverse(s.begin(),s.end());
	for(int i=0;i<s.size();i++){
		if(s[i]=='9'){
			s[i] = '6';
			continue;
		}
		if(s[i]=='6'){
			s[i]='9';
			continue;
		}
	}
	cout<<s<<endl;
}

int main()
{
	int tc=1;
	cin>>tc;
	while(tc--){
		solve();
	}	
	return 0;
}