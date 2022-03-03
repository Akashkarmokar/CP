#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int w1,h1,w2,h2;
	scanf("%d %d %d %d",&w1,&h1,&w2,&h2);
	printf("%d\n",2*(w1+h1+h2)+4);
	return 0 ;
}