#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        map<ll, ll> mp,pp;
        int n;
        cin >> n;
        vector<int> v(n);
        int mn = 55;
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mn = min(mn, v[i]);
            mx = max(mx, v[i]);
            mp[v[i]]++;
        }
        pp=mp;
       
        ll ans=-1;
        for (int j = 100; j >=1; j--)
        {
            ll cnt = 0;
            ll sum = j;
            mp=pp;
            for (int i = 0; i < n; i++)
            {
                ll tmp = sum - v[i];
                if (tmp == v[i])
                {
                    if (mp[v[i]] >= 2)
                    {
                        mp[tmp]--;
                        mp[tmp]--;
                        cnt++;
                    }
                }
                else
                {
                    if (mp[tmp] && mp[v[i]])
                    {
                        mp[tmp]--;
                        mp[v[i]]--;
                        cnt++;
                    }
                }
            }
            ans = max(ans,cnt);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}