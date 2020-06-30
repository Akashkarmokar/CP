#include<bits/stdc++.h>

using namespace std;


int lowerBound(int arr[],int arr_size,int key)
{
    int begin = 0 ;
    int end = arr_size-1;
    int mid ;
    int index = -1 ;
    while(begin<=end)
    {
        mid = (begin + end)/2;
        if(arr[mid]==key)
        {
            index = mid ;
            end = mid - 1 ;
        }
        if(key>arr[mid])
        {
            begin = mid + 1 ;
        }
        if(key<arr[mid])
        {
            end = mid - 1 ;
        }
    }
    return begin;
}

int upperBound(int arr[],int arr_size,int key)
{
    int begin = 0 ;
    int end = arr_size-1;
    int mid ;
    int index = 0 ;
    while(begin<=end)
    {
        mid = (begin + end)/2;
        if(arr[mid]==key)
        {
            index = mid ;
            begin = mid + 1 ;
        }
        if(key>arr[mid])
        {
            begin = mid + 1 ;
        }
        if(key<arr[mid])
        {
            end = mid - 1 ;
        }
    }
    return begin;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    int key;
    for(int i = 1 ;i<=q ;i++)
    {
        cin>>key;
        //cout<<arr[lowerBound(arr,n,key)-1]<<" ";
        if(key==arr[0])
        {
            cout<<"X"<<" ";
        }
        else
        {
            cout<<arr[lowerBound(arr,n,key)-1]<<" ";
        }
        
        if(key>=arr[n-1])
        {
            cout<<"X"<<endl;
        }
        else
        {
            cout<<arr[upperBound(arr,n,key)]<<endl;
        }
        
    }
    
    
  return 0 ;
}