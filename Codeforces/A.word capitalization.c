#include<stdio.h>
#define size 1000
int main()
{
    char string[size];
    int i=0;
    while(1){
        scanf("%c",&string[i]);
        if(string[i]=='\n'){
            string[i]='\0';
            break;
        }
        if(i==0){
            if(string[i]>96 && string [i]<123){
                string[i]=string [i]-32;
            }
        }
        i++;
    }
    printf("%s",string);
    printf("\n");
    return 0;
}
