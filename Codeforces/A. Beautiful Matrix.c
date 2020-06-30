#include<stdio.h>
#include<math.h>
int main ()
{
    int i,j,a,counter_i,counter_j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            scanf("%d",&a);
            if(a==1){
                counter_i=i;
                counter_j=j;
            }
        }
    }
    printf("%d\n",abs(counter_i-3)+abs(counter_j-3));
    return 0;
}
