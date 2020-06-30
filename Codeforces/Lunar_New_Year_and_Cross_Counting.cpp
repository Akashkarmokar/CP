//
// Created by akash_karmokar on 1/31/19.
//
#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    int point=0;
    scanf("%d",&n);
    char arra[n+10][n+10];
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            scanf(" %c",&arra[i][j]);
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(arra[i][j]=='X' && arra[i-1][j-1]== 'X' && arra[i-1][j+1]== 'X' && arra[i+1][j-1]== 'X' && arra[i+1][j+1]=='X'){
                point++;
            }
        }
    }
    printf("%d\n",point);
    return 0;
}
