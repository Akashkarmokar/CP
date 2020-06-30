#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,heighst;
	long long sum = 0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	sum += arr[n-1];
	for(int i=n-2;i>=0;i--){
		if(arr[i]<arr[i+1]){
			sum += arr[i];
		}
		else{
			heighst= arr[i+1]-1;
			if(heighst<=0)
				break;
			sum +=heighst;
			arr[i]=heighst;
	   }
	}
    cout<<sum<<endl;
    return 0;
}
