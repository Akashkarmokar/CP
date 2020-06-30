#include<stdio.h>
#include<math.h>

int main()
{
    int i,test_case;
    double AB,BC,CA,AD,DE,ratio;
    scanf("%d",&test_case);
    for(i=1;i<=test_case;i++)
    {
        scanf("%lf %lf %lf %lf",&AB,&CA,&BC,&ratio);
        printf("Case %d: %lf\n",i,AB*sqrt(ratio/(ratio+1)));
    }
    return 0;
}
