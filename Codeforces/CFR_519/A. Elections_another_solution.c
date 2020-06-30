#include<stdioh>
int main ()
{
  int n,a,sum=0,i,max=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    sum=sum + a;
    if(max<a){
      max = a;
    }
  }
  while(1){
    if(n*max - sum > sum){
      printf("%d\n",max);
      return 0;
    }
    max++;
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
