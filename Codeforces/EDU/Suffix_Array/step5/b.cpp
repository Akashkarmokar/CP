// // Topic : LCP -longest common prefix
// // Time complexity : O(n)

#include<bits/stdc++.h>
using namespace std;

void count_sort(vector<int>&p,vector<int>&c)
{
    int n = p.size();
    vector<int>cnt(n);
    for(auto x:c)
    {
        cnt[x]++;
    }
    vector<int>p_new(n),pos(n);
    pos[0]=0;
    for(int i=1;i<n;i++)
        pos[i]=pos[i-1]+cnt[i-1];
    for(auto x:p)
    {
        int i = c[x];
        p_new[pos[i]]=x;
        pos[i]++;
    }
    p = p_new;
}

int main()
{
    string ss,t,s;
    cin>>ss;
    cin>>t;
    s=ss+"&"+t;
    s+="$";
    int n = s.size();
    // cout<<endl<<s<<" "<<n<<endl;
    vector<int>p(n),c(n);

    vector<pair<char,int>> a(n);
    for(int i=0;i<n;i++)
        a[i]={s[i],i};
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
        p[i]=a[i].second;
    c[p[0]] = 0;
    for(int i=1;i<n;i++)
    {
        if(a[i].first==a[i-1].first)
        {
            c[p[i]] = c[p[i-1]];
        }
        else
        {
            c[p[i]] = c[p[i-1]]+1;
        }
    }
    
    int k = 0;
    while((1<<k)<n)
    {
        for(int i=0;i<n;i++)
        {
            p[i]=(p[i]-(1<<k)+n)%n;
        }
        
        count_sort(p,c);

        // making equvalante class 
        vector<int>c_new(n);
        c_new[p[0]] = 0;
        for(int i=1;i<n;i++)
        {
            pair<int,int>prv={c[p[i-1]],c[(p[i-1]+(1<<k))%n]};
            pair<int,int>now={c[p[i]],c[(p[i]+(1<<k))%n]};
            if(now==prv)
            {
                c_new[p[i]]=c_new[p[i-1]];
            }
            else
            {
                c_new[p[i]]=c_new[p[i-1]] + 1;
            }
        }
        c=c_new;
        k++;
    }

    // for(int i=0;i<n;i++)
    //     cout<<p[i]<<" "<<s.substr(p[i],n-p[i])<<"\n";

    vector<int>lcp(n);
    k = 0;
    for(int i=0;i<n-1;i++)
    {
        int pi = c[i];
        int j = p[pi-1];
        while(s[i+k]==s[j+k])k++;
        lcp[pi]=k;
        k = max(k-1,0);
    }
    
    // for(int i=0;i<n;i++)
    //     cout<<lcp[i]<<" "<<p[i]<<" "<<s.substr(p[i],n-p[i])<<endl;

    int pos = 0,sz=-1;
    string ans;
    for(int i=1;i<n;i++)
    {
        if(((p[i]<ss.size() && p[i-1]>ss.size()) or (p[i]>ss.size() && p[i-1]<ss.size())) && lcp[i]>=sz )
        {
            if(lcp[i]>sz)
            {
                ans.clear();
                sz = lcp[i];
                pos = p[i];
                ans = s.substr(pos,sz);
            }
            else if(lcp[i]==sz)
            {
                string tmp = s.substr(p[i],lcp[i]);
                if(tmp<ans)
                {
                    ans.clear();
                    ans = tmp;
                }
            }
            // sz = lcp[i];
            // pos = p[i];

        }
    }
    // cout<<endl<<"sz"<<sz<<" pos"<<pos<<endl;
    // cout<<s.substr(pos,sz)<<endl;

    cout<<ans<<endl;
    
    return 0;
}