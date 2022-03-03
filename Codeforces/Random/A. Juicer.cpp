#include<iostream>
using namespace std;

int main()
{
    int n,b,d,i,sum=0,result=0;
    scanf("%d %d %d",&n,&b,&d);
    int juices[n];
    for(i=0;i<n;i++){
        scanf("%d",&juices[i]);
        if(juices[i]<=b){
            sum=sum + juices[i];
        }
        if(sum>d){
            result++;
            sum = 0;
        }
    }
    printf("%d\n",result);
    return 0;
}
/*
*   Chant Hare Krishna mohamontra and be happy .
*
*             Akash Karmokar
*   Computer Science and engineering Department
*             38th Batch
* Metropolitan University,Sylhet,Bangladesh.
* fb:https://www.facebook.com/akashcsemu
*
*/
