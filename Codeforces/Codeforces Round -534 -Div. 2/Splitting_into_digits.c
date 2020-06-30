//
// Created by akash_karmokar on 1/22/19.
//
#include<stdio.h>
#include <math.h>
int main()
{
    int input,i,k;
    scanf("%d",&input);
    if(input==1){
        printf("1\n");
        printf("1\n");
    }
    else if(input>9){
        for(i = 9;i>0;i--){
            if(input%i==0){
                printf("%d\n",input/i);
                for(k=0;k<input/i;k++){
                    printf("%d ",i);
                }
                return  0;
            }
        }
    }
    else if(input < 9){
        for(i=input-1;i>0;i--){
            if(input%i==0){
                printf("%d\n",input/i);
                for(k=0;k<input/i;k++){
                    printf("%d ",i);
                }
                return 0;
            }
        }
    }
    else if(input==9){
        printf("%d\n",input);
        for(k=0;k<input;k++){
            printf("1 ");
        }
        return 0;
    }
    return 0;
}
