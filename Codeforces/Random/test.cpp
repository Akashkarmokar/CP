#include <bits/stdc++.h>
using namespace std;

 bool haveElement(vector<int> &a, int num){
        int l = -1; 
        int r = a.size();
        while(r>l+1){
            int mid = (r+l)/2;
            if(a[mid]<num){
                l = mid;
            }else{
                r = mid;
            }
        }
        if(r<a.size() && a[r]==num){
            return true;
        }
        return false;
        
    }

void run_case(){
	vector<int> a;
	a.push_back(1);
	cout<<haveElement(a,0)<<endl;
}

int main(){
	int tc = 1;
	// cin>>tc;
	while(tc--) {
		run_case();
	}
	return 0;
}