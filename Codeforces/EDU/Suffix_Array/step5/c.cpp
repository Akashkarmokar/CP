
// Akash karmokar 
// Metropolitan University 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define llpr pair<long long,pair<long long,long long>>

void count_sort(vector<ll>&p,vector<ll>&c)
{
    ll n = p.size();
    vector<ll>cnt(n);
    for(auto x:c)
    {
        cnt[x]++;
    }
    vector<ll>p_new(n),pos(n);
    pos[0]=0;
    for(ll i=1;i<n;i++)
        pos[i]=pos[i-1]+cnt[i-1];
    for(ll x:p)
    {
        ll i = c[x];
        p_new[pos[i]]=x;
        pos[i]++;
    }
    p = p_new;
}

bool cmpfn(llpr a,llpr b)
{
    if(a.first==b.first)
    {
        if(a.second.first==b.second.first)
        {
            return a.second.second<=b.second.first;
        }
        return a.second.first<b.second.first;
    }
    return a.first<b.first;
}

int main()
{
    string s;
    cin>>s;
    s+="$";
    ll n = s.size();
    vector<ll>p(n),c(n);

    vector<pair<char,ll>> a(n);
    for(ll i=0;i<n;i++)
        a[i]={s[i],i};
    sort(a.begin(),a.end());
    for(ll i=0;i<n;i++)
        p[i]=a[i].second;
    c[p[0]] = 0;
    for(ll i=1;i<n;i++)
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
    
    ll k = 0;
    while((1<<k)<n)
    {
        for(ll i=0;i<n;i++)
        {
            p[i]=(p[i]-(1<<k)+n)%n;
        }
        
        count_sort(p,c);

        // making equvalante class 
        vector<ll>c_new(n);
        c_new[p[0]] = 0;
        for(ll i=1;i<n;i++)
        {
            pair<ll,ll>prv={c[p[i-1]],c[(p[i-1]+(1<<k))%n]};
            pair<ll,ll>now={c[p[i]],c[(p[i]+(1<<k))%n]};
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
    vector<ll>lcp(n);
    k = 0;
    for(ll i=0;i<n-1;i++)
    {
        ll pi = c[i];
        ll j = p[pi-1];
        while(s[i+k]==s[j+k])k++;
        lcp[pi]=k;
        k = max(k-1,(ll)0);
    }
    
    // here i create cumulative array 
    ll s_len = s.size()-1;
    vector<ll>cum(n+5,0);
    cum[0]=0;
    for(ll i=1;i<n;i++)
        cum[i]=cum[i-1]+s_len-p[i]-lcp[i];
    
    vector<pair<ll ,pair<ll,ll>>>ans;
    ll xx;cin>>xx;
    while(xx--)
    {
        ll st,ed;
        cin>>st>>ed;
        st--;
        ed--;
        ll index = c[st];
        ll term;
        if(st+lcp[index]<=ed)
        {
            term = cum[index-1]+(ed-st+1)-lcp[index];
        }
        else
        {
            term = cum[index-2]+(ed-st+1)-lcp[index-1];
        }
        ans.push_back({term,{st+1,ed+1}});
        // cout<<"Term "<<term<<" "<<st+1<<" "<<ed+1<<endl;
    }
    sort(ans.begin(),ans.end(),cmpfn);
    for(auto x:ans)
    {
        cout<<x.second.first<<" "<<x.second.second<<endl;
    }
    cout<<endl;

    return 0;
}

