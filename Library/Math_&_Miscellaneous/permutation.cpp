#include<bits/stdc++.h>
using namespace std;

int used[1000],number[1000],n,cnt=0;

void permutation(int at,int n)
{
    if(at==n+1)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d ",number[i]);
        }
        printf("\n");
        cnt++;
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(!used[i])
        {
            used[i]=1;
            number[at]=i;
            permutation(at+1,n);
            used[i]=0;
        }
    }
}
int main()
{
    printf("Enter the number for how much we want to print permutaiton : ");
    scanf("%d",&n);
    printf("\n");
    permutation(1,n);
    printf("Total permutation : %d \n",cnt);
    return 0;
}