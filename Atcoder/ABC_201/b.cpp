#include<bits/stdc++.h>
using namespace std;
 
bool cmp(const pair<string,int>&a,const pair<string,int>&b){
	return a.second>b.second;
}
 
int main()
{
  int n;cin>>n;
  vector<pair<string,int>>v;
  for(int i=0;i<n;i++){
    string s;cin>>s;
    int val;cin>>val;
    v.push_back(make_pair(s,val));
  }
  sort(v.begin(),v.end(),cmp);
  cout<<v[1].first<<endl;
  return 0;
}