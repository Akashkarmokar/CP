#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n;cin>>n;
  vector<int>v(n),cnt(3);
  for(int i=0;i<n;i++){
    cin>>v[i];
    cnt[v[i]%3]++;
  }
  int ans = 0;
  while(*max_element(cnt.begin(),cnt.end())!=n/3){
    for(int i=0;i<3;i++){
      if(cnt[i]>n/3){
        ans++;
        cnt[i]--;
        cnt[(i+1)%3]++;
      }
    }
  }
  cout<<ans<<endl;

}



int main()
{
  int tc;cin>>tc;
  while(tc--){
    solve();
  }
  return 0;
}