/*
	Problem solved by Akash Karmokar Aditto
	Metropolitan University,Bangladesh.
	Department of Computer Science and Engineering
*/
#include<bits/stdc++.h>
#include <stdio.h>
#include<stdbool.h>
#include<vector>
using namespace std;
int scan_int(){
	int x;
	scanf("%d",&x);
	return x;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,day=0;
	n= scan_int();
	vector<int>vec(n);
	int maxi=0;
	for(int index = 0;index<n;index++){
		cin>>vec[index];
		maxi = max(maxi,vec[index]);
		if(maxi==index+1){
			day++;
			maxi=0;
		}
	}
	cout<<day<<endl;
	return 0;
}
