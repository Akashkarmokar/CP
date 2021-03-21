#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    vector<pair<int,int>>bag(n);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        bag.push_back(make_pair(y,x));
    }
    sort(bag.rbegin(),bag.rend());
    vector<int>box(m);
    for(int i=0;i<m;i++)
        cin>>box[i];
    
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        vector<int>available;
        for(int i=0;i<l;i++)
            available.push_back(box[i]);
        for(int i=r+1;i<m;i++)
            available.push_back(box[i]);

        sort(available.begin(),available.end());
        long long ans  = 0;
        long long mm = (long long)available.size();
        vector<long long>used(mm,0);
        for(int bag_no = 0;bag_no<n;bag_no++)
        {
            for(int av_no=0;av_no<mm;av_no++)
            {
                if(bag[bag_no].second<=available[av_no] && used[av_no]==0)
                {
                    ans+=bag[bag_no].first;
                    used[av_no] = 1;
                    break;
                }
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}