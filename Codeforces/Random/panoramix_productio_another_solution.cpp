#include<bits/stdc++.h>
using namespace std;
#define Max 50
int arra[Max];
int main()
{
    arra [0]=1;
    arra [1] = 1 ;
    int sq = sqrt(Max);
    for(int i = 4;i<Max ;i+=2){
        arra[i]=1;
    }
    for(int i = 3;i<=sq;i+=2){
        if(arra[i]==0){
            for(int j = i*i;j<=Max;j+=i){
                arra[j] = 1;
            }
        }
    }
    int n,m;
    cin>>n>>m;
    for(int i=n+1;i<=m;i++)
    {
        if(arra[i]==0 && i==m){
            cout<<"YES"<<endl;
            return 0;
        }
        if(arra[i]==0 && i!=m)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}