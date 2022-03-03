//
// Created by Akash on 1/4/2019.
//
#include <stdio.h>
int main()
{
    int test_case,result=0;
    scanf("%d",&test_case);
    char ar[test_case];
    scanf("%s",ar);
    for(int i=0;i<test_case-1;i++){
        if(ar[i]==ar[i+1]){
            result++;
        }
    }
    printf("%d\n",result);
    return 0;
}
