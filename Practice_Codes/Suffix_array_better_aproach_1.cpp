
// Time Complexity : O(n log^2(n))

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s += "$";
    int n = s.size();

    vector<int> pos(n), cls(n);

    vector<pair<char, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = {s[i], i};
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        pos[i] = a[i].second;
    }
    cls[pos[0]] = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i].first == a[i - 1].first)
        {
            cls[pos[i]] = cls[pos[i - 1]];
        }
        else
        {
            cls[pos[i]] = cls[pos[i - 1]] + 1;
        }
    }

    
    int k = 0;
    while ((1 << k) < n)
    {
        vector<pair<pair<int, int>, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = {{cls[i], cls[(i + (1 << k)) % n]}, i};
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
            pos[i] = a[i].second;
        cls[pos[0]] = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first == a[i - 1].first)
            {
                cls[pos[i]] = cls[pos[i - 1]];
            }
            else
            {
                cls[pos[i]] = cls[pos[i - 1]] + 1;
            }
        }
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << pos[i] << " ";
    }
    return 0;
}