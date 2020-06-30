#include<stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int ans=0;
    for(i=1;i<=n-1;i++){
        if(array[i]==0 && array[i-1]==1 && array[i+1]==1){
            ans++;
            array[i+1]=0;
        }
    }
    printf("%d\n",ans);
}
