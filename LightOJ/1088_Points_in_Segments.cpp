#include<bits/stdc++.h>

using namespace std;

int lowerBound(int arr[],int arr_size,int key)
{
    int begin = 0 ;
    int end = arr_size - 1 ;
    int mid ;
    int index = 0 ;
    while (begin<=end)
    {
        mid = (begin + end)/2;
        if(arr[mid]==key)
        {
            index = mid ;
            end = mid -1;
        }
        if(key>arr[mid])
        {
            begin = mid + 1 ;
        }
        if(key<arr[mid])
        {
            end = mid -1 ;
        }
    }
    return begin;
}

int upperBound(int arr[],int arr_size,int key)
{
    int begin = 0 ;
    int end = arr_size;
    int mid = 0 ;
    int index = 0 ;
    while(begin<=end)
    {
        mid = (begin+end)/2;
        if(arr[mid]==key)
        {
            index = mid;
            begin= mid + 1 ;
        }
        if(key>arr[mid]) begin = mid + 1;
        if(key<arr[mid]) end = mid -1;
    }
    return begin;
}


int main()
{
    int t_c;
    cin>>t_c;
    for(int k = 1 ;k<=t_c;k++)
    {
        printf("Case %d:\n",k);
        int n , q ;
        scanf("%d %d",&n,&q);
        int arr[n+1];
        arr[n]=100000005;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int qa,qb;
        int cnt;
        for(int i =1 ;i<=q ;i++)
        {
            cnt = 0 ;
            scanf("%d %d",&qa,&qb);
            cnt = upperBound(arr,n,qb) - lowerBound(arr,n,qa);
            printf("%d\n",cnt);
        }
    }
  return 0 ;
}