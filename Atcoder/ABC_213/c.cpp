#include <bits/stdc++.h>
using namespace std;

vector<int> compose(vector<int> &a){
	map<int,int> mp;
	for(int i=0;i<(int)a.size();i++){
		mp[a[i]]= 0;
	}
	int id = 1;
	for(auto &it:mp){
		it.second = id++;
	}
	for(int i=0;i<(int)a.size();i++){
		a[i] = mp[a[i]];
	}
	return a;
}


int main(){
	int h,w,n;
	cin>>h>>w>>n;
	vector<int> row(n), col(n);
	for(int i=0;i<n;i++){
		cin>>row[i]>>col[i];
	}
	row = compose(row);
	col = compose(col);
	for(int i=0;i<n;i++){
		cout<<row[i]<<" "<<col[i]<<endl;
	}
	return 0;
}