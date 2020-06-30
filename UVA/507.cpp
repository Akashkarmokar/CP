// Prerequisite : Kadane's algorithm , DP. 

#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int routes;
    cin>>routes;
    for(int r = 1 ;r<=routes ;r++)
    {
        int n ;
        cin>>n;
        int arr[n];
        arr[0] = 0 ;
        int pos = 0 ;
        for(int i = 1 ;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
                pos++;
        }
        if(pos==0)
        {
            cout<<"Route "<<r<<" has no nice parts"<<endl;
        }
        else
        {
            int max_so_far = INT_MIN;
            int max_end_here = 0 ;  //current Maximum 
            int maxa0 = 1 ;
            int maxan = 1;
            int a0 = 1 ;
            for(int k = 1 ;k<n;k++)
            {
                max_end_here = max_end_here + arr[k];
                if(max_end_here<0)
                {
                    max_end_here = 0 ;
                    a0 = k + 1 ;
                    maxa0 = (max_so_far<=0?a0:maxa0);
                }
                if(max_end_here>max_so_far || (max_end_here==max_so_far && (k+1 - a0>maxan-maxa0)))
                {
                    max_so_far = max_end_here ;
                    maxa0=a0;
                    maxan = k+1;    
                } 
            }
            cout<<"The nicest part of route "<<r<<" is between stops "<<maxa0<<" and "<<maxan<<endl;
        }
        
        
    }
    return 0;
}
