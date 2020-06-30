#include<stdio.h>
#include<math.h>
int main(){
    int n,value=-1,temp,temp1;
    scanf("%n",&n);
    int arra[n],i,j;
    for(i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arra[j]>arra[j+1]){
                temp = arra[j];
                arra[j]=arra[j+1];
                arra[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\n",arra[i]);
    }
    return 0;
}