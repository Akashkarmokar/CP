#include<stdio.h>
int main()
{
    int test_case,i,input_value,f_output,s_output;
    scanf("%d",&test_case);
    for(i=0;i<test_case;i++){
        scanf("%d",&input_value);
        if(input_value>10){
            f_output=input_value-10;
            s_output=10;
            printf("%d %d\n",f_output,s_output);
        }
        else{
            printf("0 %d\n",input_value);
        }
    }
    return 0 ;
}
