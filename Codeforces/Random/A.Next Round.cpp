#include<iostream>
using namespace std;
int arr[102];
int main()
{
    int n,k,value=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(arr[value]>0 && arr[value]>=arr[k-1]){
        value++;
    }
    cout<<value<<endl;
    return 0;
}
/*
* Chant Hare Krishna mohamontra and be happy .
*
*             Akash Karmokar
* Computer Science and engineering Department
*             38th Batch
* Metropolitan University,Sylhet,Bangladesh.
*
*
*/
