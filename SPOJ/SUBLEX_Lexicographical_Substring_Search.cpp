
//We can solve this problem with cumulative array or without cumulative array of distinct substring .
// First we find the postion of substring in suffix array from cumulative array .
// Then we take string index from suffix array. Then we print from this index .
// But how much we print ? The ans is index to (K - Sum Of Distinct Substring Num +lcp[index])

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
    string s;
    cin>>s;
    s+="$";
    int n = s.size();
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
    
    /*
    
    If we do with Cumulative array 

    int s_len = s.size() - 1;
    vector<int>cum(n+5,0);
    cum[0]=0;
    for(int i=1;i<n;i++)
    {
        int x = (s_len - p[i])-lcp[i];
        cum[i]=cum[i-1]+x;
    }

    int tc;cin>>tc;
    while(tc--)
    {
        int k;cin>>k;
        int pos=0,tmp;
        for(int i = 1;i<n;i++)
        {
            if(cum[i]>=k)
            {
                pos = p[i];
                tmp = i;
                break;
            }
        }
        cout<<s.substr(pos,k-cum[tmp-1]+lcp[tmp])<<endl;
    }
    */

    // without cumulative array
    int s_len = s.size()-1;
    int tc;cin>>tc;
    while(tc--)
    {
        int k;cin>>k;
        int index,sum_dis_sub = 0,pre_sum_dis_sub,it;
        for(int i=1;i<n;i++)
        {
            sum_dis_sub+=s_len-p[i]-lcp[i];
            pre_sum_dis_sub=sum_dis_sub-(s_len-p[i]-lcp[i]);
            if(sum_dis_sub>=k)
            {
                index = p[i];
                it = i;
                break;
            }
        }
        cout<<s.substr(index,k-pre_sum_dis_sub+lcp[it])<<endl;
    }
    return 0;
}