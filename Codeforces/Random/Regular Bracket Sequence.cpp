/*
	Problem solved by Akash Karmokar Aditto
	Metropolitan University,Bangladesh.
	Department of Computer Science and Engineering
*/
#include<bits/stdc++.h>
#include <stdio.h>
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
	int c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if(c1==0 && c3 ==0 && c4 ==0){
		cout<<"1"<<endl;
	}
	else if(c1==c4 && c4!=0){
		cout<<"1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
	return 0;
}