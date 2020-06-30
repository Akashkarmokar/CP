#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,i,remaining,x,y;
    scanf("%d %d",&n,&k);
    int a[k];
    if(k>n){
        printf("NO\n");
        return 0;
    }
    for(i=0;i<k;i++){
        a[i]=1;
    }
    x=n;
    y=k;
    if(x%2!=0){
        x--;
        k--;
        //a[0]=1;
    }
    remaining = x-k;
    for(i=0;i<y;i++){
        int z = log2(remaining+1);
        int b = pow (2,z);
        a[i]=b;
        remaining = remaining - (b-1);
        if(remaining ==0){
            break;
        }
    }
    if(remaining!=0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
        for(i=0;i<y;i++){
            printf("%d ",a[i]);
        }
    }
    return 0;

}
