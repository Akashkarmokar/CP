#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<q;i++)
    {
        int a;
        cin>>a;
        int l=-1,r=n,mid;
        while(l+1<r)
        {
            mid = (r+l)/2;
            if(v[mid]<a)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        cout<<r+1<<endl;
    }
    return 0;
}