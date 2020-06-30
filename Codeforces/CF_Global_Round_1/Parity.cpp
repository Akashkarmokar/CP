//
// Created by akash_karmokar on 2/15/19.
//
#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int b,k,sum = 0,a;
    scanf("%d %d",&b,&k);
    for(int i =0;i<k;i++){
        scanf("%d",&a);
        sum +=a;
    }
    if(b%2==0){
        if(a%2==0){
            printf("even\n");
            return 0;
        }
        else{
            printf("odd\n");
            return 0;
        }
    }
    else{
        if(sum%2==0){
            printf("even\n");
            return 0;
        }
        else{
            printf("odd\n");
            return 0;
        }
    }
    return  0;

}