/*
    Problem solved by,
    Akash Karmokar Aditto
    akashcsemu@gmail.com
    Metropolitan University,Bangladesh.
    Department of Computer Science and Engineering
*/
#include<bits/stdc++.h>
#include <stdio.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    
    int n,m,k;
    int count=0;
    cin>>n>>m>>k;
    int arr1[n+1];
    int arr2[n+1];
    int arr3[k+1];
    int max[m+1]={0};
    for(int i=1;i<=n;i++){
        cin>>arr1[i];
    }
    for(int i=1;i<=n;i++){
        cin>>arr2[i];
        if(max[arr2[i]]<arr1[i]){
            max[arr2[i]] = arr1[i];
        }
    }
    for(int i=1;i<=k;i++){
        cin>>arr3[i];
    }
    for(int i =1;i<=k;i++){
        if(arr1[arr3[i]]<max[arr2[arr3[i]]]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
