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
	int x,y,z,a,b,c;
	x = scan_int(); y = scan_int(); z = scan_int();
	a = scan_int(); b = scan_int(); c = scan_int();
	if(a<x){
		printf("NO\n");
	}
	else{
		int p = (a+b)-x;
		if(p >= y  &&  ((p-y)+c >=z)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
}
