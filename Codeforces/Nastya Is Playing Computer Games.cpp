/*
  Problem Solved By :             Akash Karmokar
                   Department of Computer Science and Technology
                     Metropolitan University,sylhet,Bangladesh.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif
  
  int n,k;
  cin>>n>>k;
  cout<<3*n+min(n-k,k-1)<<endl;
  return 0;
}
