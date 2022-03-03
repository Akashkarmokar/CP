#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("ou.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int l = arr[0];
	int h = arr[n-1];
	int mid = (l+h)/2;
	for(int i = 0;i<=100;i++)
	{
		bool flag = true;
		int res = arr[0] + i ;
		for(int j =1;j<n;j++)
		{
			if(arr[j]-i !=res && arr[j]+i !=res && arr[j]!=res ){
				flag =  false;
				break;
			}
		}
		if(flag){
			cout<<i<<"\n";
			return 0;
		}
	}
	cout<<"-1"<<endl;
	return 0;
}
