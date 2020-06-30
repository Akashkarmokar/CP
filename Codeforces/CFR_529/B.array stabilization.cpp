#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n==2){
        printf("0\n");
        return 0;
    }
    int array[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int x = sizeof(array)/sizeof(array[0]);
    sort(array,array+x);
    printf("%d\n",min(array[n-2]-array[0],array[n-1]-array[1]));
    return 0;
}
