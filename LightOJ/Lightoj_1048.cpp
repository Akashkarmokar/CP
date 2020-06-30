#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int k;
bool isp(int l)
{
    int co = 0;
    int sum = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > l)
            return false;
        else if (sum + v[i] <= l)
        {
            sum += v[i];
        }
        else
        {
            sum = v[i];
            co++;
        }
    }
    if (co <= k)
        return true;
    return false;
}
void prt(int l)
{
    int sum = 0;
    int co = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        if (sum > l)
        {
            printf("%d\n", sum - v[i]);
            sum = v[i];
            co++;
        }
        if (k - co + 1 >= v.size() - i)
        {
            printf("%d\n", sum);
            for (int j = i + 1; j < v.size(); j++)
                printf("%d\n", v[i]);
            break;
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    int ts;
    scanf("%d", &ts);
    for (int p = 1; p <= ts; p++)
    {
        v.clear();
        int n, low = INT_MIN, high = 0, mid = 0, ans;
        scanf("%d%d", &n, &k);
        for (int i = 0; i <= n; i++)
        {
            int a;
            scanf("%d", &a);
            high += a;
            v.push_back(a);
            low = max(low, a);
        }
        while (high - low > 2)
        {
            mid = (low + high) / 2;
            if (isp(mid))
                high = mid;
            else
                low = mid;
        }
        for (int i = high; i >= low; i--)
            if (isp(i))
                ans = i;
        printf("Case %d: %d\n", p, ans);
        prt(ans);
    }
    return 0;
}