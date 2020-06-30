#include<stdio.h>
int main()
{
    int test_case,a,b,c,i,sum_a=0,sum_b=0,sum_c=0;
    scanf("%d",&test_case);
    for(i=0;i<test_case;i++){
        scanf("%d%d%d",&a,&b,&c);
        sum_a = sum_a + a;
        sum_b = sum_b + b;
        sum_c = sum_c + c;

    }
    if(sum_a==0 && sum_b == 0 && sum_c==0 ){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
    return 0;
}
