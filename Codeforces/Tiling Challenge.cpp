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
	char arr[n][n];
	int count = 0;
	for(int i = 0 ;i<n;i++)
	{
		for(int j = 0 ;j<n ;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]=='.'){
				count++;
			}
		}
	}
	int p = 0 ;
	for(int i = 1 ;i<=n-2;i++)
	{
		for(int j = 1 ;j<=n-2;j++)
		{
			if(arr[i][j] == '.'){
				if( arr[i][j-1]=='.' && arr[i][j+1]=='.' && arr[i-1][j]=='.' && arr[i+1][j]=='.')
				{
					arr[i][j-1]='a';
					arr[i][j+1]='a';
					arr[i-1][j]='a';
					arr[i+1][j]='a';
					p = p+5;
						
				}

			}
		}
		
	}
	if(p == count)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0 ;
}