#include<stdio.h>
int main()
{
    char ternary;
    while( (ternary = getchar()) != '\n' ){
        if( ternary == '.'){
            putchar('0');
        }
        else if(ternary == '-'){
                ternary = getchar();
            if(ternary == '.') putchar('1');
            else if(ternary == '-') putchar ('2');
        }
    }
    return 0 ;
}
