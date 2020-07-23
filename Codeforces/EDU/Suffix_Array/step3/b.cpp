#include <bits/stdc++.h>
using namespace std;
 
void count_sort(vector<int> &p, vector<int> &c)
{
    int n = p.size();
    vector<int> p_new(n,0), cnt(n,0), pos(n,0);
    for (auto x : c)
    {
        cnt[x]++;
    }
    pos[0] = 0;
    for (int i = 1; i < n; i++)
    {
        pos[i] = pos[i - 1] + cnt[i - 1];
    }
    for (auto x : p)
    {
        int i = c[x];
        p_new[pos[i]] = x;
        pos[i]++;
    }
    p = p_new;
}
int lwbnd(string &pp,string &s,vector<int> &p)
{
    int l = 0,r=p.size()-1,mid,val=-1;
    while (l<=r)
    {
        mid = (l+r)/2;
        string nw = s.substr(p[mid],pp.size());
        if(pp==nw)
        {
            val = mid;
            r = mid -1;
        }
        else if(pp<nw)
        {
            r = mid -1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return val;
}
 
int upbnd(string &pp,string &s,vector<int> &p)
{
    int l = 0,r=p.size()-1,mid,val=-1;
    while (l<=r)
    {
        mid = (l+r)/2;
        string nw = s.substr(p[mid],pp.size());
        if(pp==nw)
        {
            val = mid+1 ;
            l = mid+1;
        }
        else if (nw>pp)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return val;
}
int main()
{
    string s;
    cin >> s;
    s += "$";
    int n = s.size();
 
    vector<int> p(n,0), c(n,0);
    {
        // k = 0;
        vector<pair<char, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = {s[i], i};
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            p[i] = a[i].second;
        }
        c[p[0]] = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first == a[i - 1].first)
            {
                c[p[i]] = c[p[i - 1]];
            }
            else
            {
                c[p[i]] = c[p[i - 1]] + 1;
            }
        }
    }
 
    int k = 0;
    while ((1 << k) < n)
    {
        // k ->k+1;
        for (int i = 0; i < n; i++)
        {
            p[i] = (p[i] - (1 << k) + n) % n;
        }
        count_sort(p, c);
        vector<int> c_new(n,0);
        c_new[p[0]] = 0;
        for (int i = 1; i < n; i++)
        {
            pair<int, int> prev = {c[p[i - 1]], c[(p[i - 1] + (1 << k)) % n]};
            pair<int, int> now = {c[p[i]], c[(p[i] + (1 << k)) % n]};
            if (now == prev)
            {
                c_new[p[i]] = c_new[p[i - 1]];
            }
            else
            {
                c_new[p[i]] = c_new[p[i - 1]] + 1;
            }
        }
        c = c_new;
        k++;
    }
    
    long long tc;
    cin >> tc;
    while (tc--)
    {
        string pp;
        cin >> pp;
        int nn = pp.size();
        int up = upbnd(pp,s,p);
        // cout<<"up "<<up<<endl;
        int lw = lwbnd(pp,s,p);
        // cout<<"lw "<<lw<<endl;
 
        cout<<up-lw<<endl;
 
    }
    return 0;
}