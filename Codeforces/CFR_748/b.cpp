#include <bits/stdc++.h>
using namespace std;

const string match[] = {"00","25","50","75"};
const int INF = 100;

int solve(string& s,string& item){
	int delCount  = 0;
	int idx = s.length() - 1;
	while(idx>=0 && s[idx]!=item[1]){
		idx--;
		delCount++;
	}

	if(idx < 0){
		return INF;
	}
	idx--;
	while(idx>=0 && s[idx]!=item[0]){
		idx--;
		delCount++;
	}

	return idx<0?INF:delCount;

}

void run_case(){
	string s;
	cin>>s;

	int ans = INF;
	for(auto item: match){
		ans = min(ans,solve(s,item));
	}

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