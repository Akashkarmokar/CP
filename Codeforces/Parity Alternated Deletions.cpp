/*
  Problem Solved By :             Akash Karmokar
                   Department of Computer Science and Technology
                     Metropolitan University,sylhet,Bangladesh.
*/
#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif
  
  int n ;
  cin>>n;
  vector<int>odd,even;
  int x ;
  int sum =0;
  for(int i =0;i<n;i++)
  {
      cin>>x;
      sum+=x;
      if(x & 1) {
          odd.push_back(x);
      }
      else {
          even.push_back(x);
      }
  }
  sort(odd.rbegin(),odd.rend());
  sort(even.rbegin(),even.rend());
  int k = min(odd.size(),even.size());
  sum -= accumulate(odd.begin(),odd.begin()+k,0);
  sum -= accumulate(even.begin(),even.begin()+k,0);
  if(int(odd.size())>k){
      sum -= odd[k];
  }
  if(int(even.size())>k){
      sum -= even[k];
  }
  cout<<sum<<endl;
  return 0;
}
