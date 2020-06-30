#include<iostream>
#include<stdio.h>

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif

    int light[5][5] = {0};
    for(int i = 1 ;i<=3 ;i++)
    for(int j = 1 ; j<=3 ;j++)
    scanf("%d",&light[i][j]);

    for(int i = 1 ;i<=3 ;i++)
    {
        for(int j =1 ;j<=3 ;j++)
        {
            printf("%d",(1+light[i][j]+light[i][j+1]+light[i][j-1]+light[i-1][j]+light[i+1][j])%2);
        }
        printf("\n");
    }
    return 0 ;
}