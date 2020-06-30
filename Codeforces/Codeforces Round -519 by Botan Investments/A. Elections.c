#include<stdio.h>
int main()
{
  int n,i,k=0,sum_of_awruk=0,sum_of_elodrip=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum_of_elodrip=sum_of_elodrip+a[i];
    if(k<a[i]){
      k=a[i];
    }
  }
  while(1){
    for(i=0;i<n;i++){
      sum_of_awruk=sum_of_awruk+(k-a[i]);
    }
    if(sum_of_elodrip<sum_of_awruk){
      printf("%d\n",k);
      return 0;
    }
    sum_of_awruk=0;
    k++;
  }
  return 0;
}
/*
* Chant Hare Krishna mohamontra and be happy .
*
*             Akash Karmokar
* Computer Science and engineering Department
*             38th Batch
* Metropolitan University,Sylhet,Bangladesh.
* Email:akashcsemu@gmail.com
*
*/
