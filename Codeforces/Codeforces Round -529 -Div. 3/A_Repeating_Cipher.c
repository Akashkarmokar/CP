#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char c[n];
    scanf("%s",c);
    int x=0,i=0;
    while(x<n){
        printf("%c",c[x]);
        i++;
        x = x + i;
    }
    return 0;
}