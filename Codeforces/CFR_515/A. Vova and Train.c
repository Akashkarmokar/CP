#include<stdio.h>
int main()
{
  int test_case,i;
  long int L,v,l,r;
  scanf("%d",&test_case);
  for(i=0;i<test_case;i++){
    scanf("%ld %ld %ld %ld",&L,&v,&l,&r);
    printf("%ld\n",L/v-r/v+(l-1)/v);
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
