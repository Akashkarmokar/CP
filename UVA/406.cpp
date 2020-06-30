#include<bits/stdc++.h>
using namespace std;
#define Max 1005
int prime[Max];

void sieve()
{
    prime[0] = 1;
    for(int i = 4 ;i<Max ;i+=2)
    {
        prime[i] = 1;
    }
    int sq = sqrt(Max);
    for(int i = 3 ;i<=sq;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j = i*i;j<Max;j+=i)
            {
                prime[j] = 1;
            }
        }
    }
}
int main()
{
    sieve();
    int n,c;
    while(cin>>n>>c)
    {
        vector<int>tmp;
        for(int i = 1 ;i<=n;i++)
        {
            if(prime[i]==0)
            {
                tmp.push_back(i);
            }
        }
        cout<<n<<" "<<c<<":";
        int total = tmp.size();
        if(total%2==0)
        {
            int prnt = 2*c;
            if(prnt>=total)
            {
                for(int i= 0 ;i<tmp.size();i++)
                {
                    cout<<" "<<tmp[i];
                }
                cout<<endl;
            }
            else
            {
                int value = total - prnt;
                int vv = value/2;
                int xx = vv + prnt;
                for(int i = vv ;i<xx;i++)
                {
                    cout<<" "<<tmp[i];
                }
                cout<<endl;
            }
        }
        else
        {
            int prnt = 2*c-1;
            if(prnt>=total)
            {
                for(int i= 0 ;i<tmp.size();i++)
                {
                    cout<<" "<<tmp[i];
                }
                cout<<endl;
            }
            else
            {
                int value = total - prnt;
                int vv = value/2;
                int xx = vv + prnt;
                for(int i = vv ;i<xx;i++)
                {
                    cout<<" "<<tmp[i];
                }
                cout<<endl;
            }

        }
        cout<<endl;
    }
    return 0;
}
