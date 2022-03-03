#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int t[n]; for(int i=0;i<n;i++) cin>>t[i];
	int akt = 1, ans = 0;
	if(t[0] == 1) akt++;
	for(int i=1;i<n;i++){
		if(t[i] == t[i-1]+1) akt++;
		else akt = 1;
		ans = max(akt-2, ans);
	}
	if(t[n-1] == 1000) akt++; 
	ans = max(akt-2, ans);
	cout<<ans;
	
}