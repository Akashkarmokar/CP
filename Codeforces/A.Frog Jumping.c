#include<stdio.h>
int main ()
{
   long long int a,b,k,i;
   int test_case ;
    scanf("%I64d",&test_case);
    for(i=0;i<test_case;i++)
    {
        scanf("%I64d %I64d %I64d",&a,&b,&k);
        if(k%2==0){
        printf("%I64d\n",(a-b)*(k/2));
        }
        else {
        printf("%I64d\n",(a-b)*(k/2)+a);
        }
    }
    return 0 ;
}
