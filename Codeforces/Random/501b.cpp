#include "bits/stdc++.h"
#include <string>
#include <unordered_map>
using namespace std;

void run_case(){
	int q; cin>>q;
	unordered_map<string, string> old,nw;
	while(q--){
		string oldstr,newstr; cin>>oldstr>>newstr;
		if(nw.find(oldstr)==nw.end()){
			old[oldstr] = newstr;
			nw[newstr] = oldstr;
		}else{
			string key = oldstr;
			string val = nw[oldstr];
			old[val] = newstr;
			auto it2 = nw.find(oldstr);
			nw.erase(it2);
			nw[newstr] = val;
		}
	}
	cout<<(int)old.size()<<endl;
	for(auto it:old){
		cout<<it.first<<" "<<it.second<<endl;
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