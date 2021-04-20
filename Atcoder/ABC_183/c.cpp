#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<vector<int>>T(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>T[i][j];
        }
    }
    vector<int>per(n);
    for(int i=0;i<n;i++){
        per[i]=i;
    }
    int cnt = 0;
    do{
        int time = 0;
        for(int i=0;i<n;i++){
            time+=T[per[i]][per[(i+1)%n]];
        }
        if(time==k){
            cnt++;
        }
    }while(next_permutation(per.begin()+1,per.end()));
    cout<<cnt<<endl;
    return 0;
}