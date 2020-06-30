//
// Created by akash_karmokar on 2/16/19.
//
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n,m,k,ans=0;
    scanf("%d %d %d",&n,&m,&k);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int remaining[n-1];
    for(int i=0;i<n-1;i++){
        remaining[i]=arr[i+1]-arr[i];
    }
    sort(remaining,remaining+n-1);
    for(int i = 0;i<n-k;i++){
        ans+=remaining[i];
    }
    printf("%d\n",ans+k);
    return 0;

}
