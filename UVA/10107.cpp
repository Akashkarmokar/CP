#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10005],n,i=1;
    while(scanf("%d",&n)!=EOF)
    {
        arr[i]=n;
        sort(arr,arr+i+1);
        int md = i/2;
        if(i%2==0)
        {
            int avg = (arr[md]+arr[md+1])/2;
            cout<<avg<<endl;
        }
        else
        {
            cout<<arr[md+1]<<endl;
        }
        i++;

    }
    return 0;
}