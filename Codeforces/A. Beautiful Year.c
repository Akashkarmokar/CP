#include<stdio.h>
int main()
{
    int year,a,b,c,d;
    scanf("%d",&year);
    while(year++){

        d = year%10 ;
        c = (year/10)%10 ;
        b = ((year/10)/10)%10;
        a = (((year/10)/10)/10)%10;
        if(a!=b && b!=c && c!=d && b!=d && a!=c && a!=d){
            break;
        }

    }
    printf("%d\n",year);
    return 0;
}
