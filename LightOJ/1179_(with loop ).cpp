#include<bits/stdc++.h>
using namespace std;

int main()
{
  int tc;cin>>tc;
  for(int i=1;i<=tc;i++)
  {
	  int n,k;
	  cin>>n>>k;
	  int soward = 1;
	  for(int j=2;j<=n;j++)
	  {
		  soward = (soward+(k-1))%j + 1;
	  }
	  cout<<"Case "<<i<<": "<<soward<<endl;
  }
  return 0;
}
