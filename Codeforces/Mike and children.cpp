/*
    Problem solved by,
    Akash Karmokar Aditto
    akashcsemu@gmail.com
    Metropolitan University,Bangladesh.
    Department of Computer Science and Engineering
*/
#include<bits/stdc++.h>
#include<algorithm>
#include <stdio.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    
    map<int,int>mp;
    int n;
    cin>>n;
    int arr[n];
    int maxi = 0;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i =0 ;i<=n-2;i++){
        for(int j =i+1;j<=n-1;j++){
            mp[arr[i]+arr[j]]++;
            maxi = max(maxi,mp[arr[i]+arr[j]]);
        }
    }    
    cout<<maxi<<endl;
    return 0;
}
