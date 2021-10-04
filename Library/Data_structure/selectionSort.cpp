#include <bits/stdc++.h>
using namespace std;


void selectionSort(vector<int>&a){
	int n = (int)a.size();
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}

int main(){
	vector<int> a = {5,4,3,96,100,2};
	selectionSort(a);
	for(auto it:a){
		cout<<it<<" ";
	}
	return 0;
}