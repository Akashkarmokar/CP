#include<stdio.h>
int main()
{
    int i,ans=0,test_case,g_array[2000000],r_array[2000000],test_array[2000000]={0};
    long long int sum = 0;
    scanf("%d",&test_case);
    for(i=0;i<test_case;i++){
        scanf("%d",&g_array[i]);
        sum =sum + g_array[i];
        test_array[g_array[i]]++;
    }
    for(i=0;i<test_case;i++){
        sum = sum - g_array[i];
        test_array[g_array[i]]--;
        if( sum%2==0  &&  sum <= 2000000){
                if(test_array[sum/2]>0){
                        r_array[ans]=i+1;
                        ans++;
                }

        }
        sum = sum + g_array[i];
        test_array[g_array[i]]++;

    }
    if(ans == 0){
        printf("0");
        return 0;
    }
    printf("%d\n",ans);
    for(i=0;i<ans;i++){
        printf("%d ",r_array[i]);
    }
    return 0;
}
