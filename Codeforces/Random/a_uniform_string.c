#include<stdio.h>
char arra[104];
int main(){
    int test_case,value;
    scanf("%d",&test_case);
    int x = 0,i=0,n,j=0,k;
    for(x=0;x<test_case;x++){
        scanf("%d%d",&n,&k);
        char arra[n];
        int value = 97;
        for(i=0;i<n;i++){
            arra[i]=value;
            value++;
            if((i+1)%k==0){
                value = 97;
            }
        }
        //printf("%s\n",arra);
        for(i=0;i<n;i++){
        printf("%c",arra[i]);
    }
    printf("\n");
    }
    
    return 0;
}