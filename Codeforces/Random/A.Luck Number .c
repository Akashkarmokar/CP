#include<stdio.h>
int main()
{
    int x =0;
    char c;
    while((c=getchar())!='\n'){
        if(c=='4' || c=='7'){
            x++;
        }
    }
    if(x==4 || x==7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
