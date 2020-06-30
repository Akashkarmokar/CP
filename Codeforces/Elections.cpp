
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m,x,cmp=-1,y,big= -1,index;
	int arr[105]={0};
	scanf("%d %d",&n,&m);
	for(int i=1;i<=m;i++){
		y=0;
		cmp = -1;
		for(int j=0;j<n;j++){
			scanf("%d",&x);
			if(x>cmp){
				cmp = x;
				y = j;
			}
			
		}
		arr[y]++;
	}
	// for(int i = 0;i<n;i++){
	// 	printf("%d ",arr[i]);
	// }
	for(int i =0;i<n;i++){
		if(arr[i]>big){
			big = arr[i];
			index = i ;
		}
	}
	printf("%d\n",index+1);
	return 0;
}