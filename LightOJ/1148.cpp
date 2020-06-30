/*
    It is really a mad counting problem .
    We have to find out minimum number of population . So ,if we can  minimize the numberof team then 
    we can minimize the number of population .
    For this we need some observation ....
    Let's see a example :

    N = 1 ; poll 1 : for this ans is 2 .
    N = 1 ; poll 2 : minimum population is 3.He poll it without him .
    N = 1 ; poll 3 : minimum population is 4.he poll it without him.
    now........ start thinkig.
    N = 2 ; poll 3 3: minimum population is 4
        here our motive is minimizing the number of team .

            for first person  :    1 2 3 4 5 6 7......... (assuming some people) 
                                     ^ ^ ^ (indicating people)
            for second person :    ^   ^ ^ (indicating people)

    N = 3 ; poll 3 3 3: minimum population is 4
        here our motive is minimizing the number of team .

            for first person  :    1 2 3 4 5 6 7......... (assuming some people) 
                                     ^ ^ ^ (indicating people)
            for second person :    ^   ^ ^ (indicating people)
            for third person :     ^ ^   ^ (indicating people)
    N = 4 ; poll 3 3 3 3: minimum population is 4
        here our motive is minimizing the number of team .

            for first person  :    1 2 3 4 5 6 7......... (assuming some people) 
                                     ^ ^ ^ (indicating people)
            for second person :    ^   ^ ^ (indicating people)
            for third person :     ^ ^   ^ (indicating people)
            for fourth person:     ^ ^ ^

    N = 5 ; poll 3 3 3 3 3: minimum population is 8
        here our motive is minimizing the number of team .

            for first person  :    1 2 3 4 5 6 7 8......... (assuming some people) 
                                     ^ ^ ^                             (indicating people)
            for second person :    ^   ^ ^                             (indicating people)
            for third person :     ^ ^   ^                             (indicating people)
            for fourth person:     ^ ^ ^                               (indicatiog people)
            for fifth person :               ^ ^ ^              (indication new 3 people)
            ...... and so on
*/


#include<bits/stdc++.h>
using namespace std;
#define loj(i,j) (cout<<"Case "<<i<<": "<<j<<endl)
#define ll long long

int main()
{
    int tc;cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        ll sum = 0;
        int n;cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mp[x]++; // here we count same voter to minimize team number
        }
        for(map<int,int>:: iterator it=mp.begin();it!=mp.end();it++)
        {
            ll min_people = it->first+1; //for any value of it->first we need it->first+1 people
            ll same_vote = it->second;  // vale of the same voter 
            ll min_team = (same_vote+(min_people-1))/min_people; // we calculate here how much team there are ...
            ll people = min_team*min_people;
            sum+=people;
        }
        loj(i,sum);
    }
    return 0;
}
