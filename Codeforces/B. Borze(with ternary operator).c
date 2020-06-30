#include<stdio.h>
char s[202];
int main()
{
   scanf("%s",s);
   int i = 0;
   for(i=0;s[i];i++){
     putchar( (s[i]=='.' ? '0' :((s[++i])=='.' ? '1' : '2' )));
   }

    return 0;
}
