#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        int it=0;
        long long sum = 0;
        for(int i=0;i<k;i++)
        {
           if(a[i]<b[it])
           {
               sum+=b[it];
               it++;
           }
        }
        for(int i =it;i<n;i++)
            sum+=a[i];
        cout<<sum<<endl;

    }
    return 0;
}