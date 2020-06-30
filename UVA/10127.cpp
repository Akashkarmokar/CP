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
	int n;
	while(cin>>n){
		int num = 0,i=0;
		while(1){
			num = (num)*10 + 1;
			i++;
			num = num % n;
			if(num == 0){
				break;
			}
		}
		cout<<i<<endl;
	}
	return 0;
}
