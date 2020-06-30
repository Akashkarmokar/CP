#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	bool arr[n];
	int instance=0,result=0;
	for(int i = 0 ;i<n;i++){
		cin>>arr[i];
	}
	for(int i = 0;i<2*n ;i++){
		if(arr[i%n]==0){
			result = max (instance,result);
			instance = 0;
		}
		else{
			instance++;
		}
	}
	cout<<result<<endl;
	return 0;
}
