#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	string s; cin>>s;
	int n = s.size();
	vector<string> v(n);
	for(int i=0;i<n;i++){
		v[i] = s.substr(i,n-i)+s.substr(0,i);
	}
	cout<<*min_element(v.begin(),v.end())<<"\n";
	cout<<*max_element(v.begin(),v.end())<<"\n";
	return 0;
}