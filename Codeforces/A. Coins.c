#include<stdio.h>
int main ()
{
    int n,s,temp =0;
    scanf("%d %d",&n,&s);
    temp=s/n;
    if(s%n) temp++;
    printf("%d",temp);
    return 0;
}
