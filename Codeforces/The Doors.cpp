/*
  Problem Solved By :             Akash Karmokar
                   Department of Computer Science and Technology
                     Metropolitan University,sylhet,Bangladesh.
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
//   #ifndef ONLINE_JUDGE
//   freopen("input.txt","r",stdin);
//   #endif
  
  int n,x;
  int l=0,r=0;
  cin>>n;
  int arra[n+2];
  arra[0]=0;
  for(int i =1;i<=n;i++){
      cin>>arra[i];
      if(arra[i]==0){
          l++;
      }
      if(arra[i]==1){
          r++;
      }
  }
//   cout<<l<<endl;
//   cout<<r<<endl;
  for(int i =1;i<=n;i++){
      if(arra[i]==0){
          l--;
          if(l==0){
              cout<<i<<endl;
              break;
          }
      }
      if(arra[i]==1){
          r--;
          if(r==0){
              cout<<i<<endl;
              break;
          }
      }
  }
  return 0;
}
