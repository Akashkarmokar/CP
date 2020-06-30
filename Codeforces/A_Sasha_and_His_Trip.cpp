//
// Created by akash_karmokar on 2/17/19.
//
#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    int n,v,money=0;
    scanf("%d%d",&n,&v);
    if(n<=v){
        printf("%d\n",n-1);
        return 0;
    }
    for(int i=2;i<=n-v;i++){
        money+=i;
    }
    printf("%d\n",money+v);
    return 0 ;
}