#include<bits/stdc++.h>
using namespace std;

int arr[105][105];
int main()
{
    int h,w;
    cin>>h>>w;
    int mn = 105;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>arr[i][j];
            mn=min(mn,arr[i][j]);
        }
    }
    int ans = 0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            ans+=abs(arr[i][j]-mn);
        }
    }
    cout<<ans<<endl;
    return 0;
}