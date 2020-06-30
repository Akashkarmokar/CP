#include<stdio.h>
#include<string.h>
int main()
{

    char string[102];
    int low=0,up=0,i=0,j=0;
    while(1){
        scanf("%c",&string[i]);
        if(string[i]=='\n'){
            string[i]='\0';
            break;
        }
        if(string[i]>96 && string[i]<128){
            low++;
        }
        else if(string[i]<91 && string[i]>64){
            up++;
        }
        i++;

    }
    if(low == up || low>up){
        printf("%s",strlwr(string));
    }
    else{
        printf("%s",strupr(string));
    }
    return 0;
}
