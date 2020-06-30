#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        stack<int>s;
        queue<int>q;
        int c=1;
        for(int i=1;i<=n;i++)
        {
            int tmp;
            cin>>tmp;
            q.push(tmp);
        }
        
        while(!q.empty() || !s.empty())
        {
            if(!q.empty() && q.front()==c)
            {
                q.pop();
                c++;
            }
            else
            {
                if(!s.empty() && s.top()==c)
                {
                    s.pop();
                    c++;
                }
                else
                {
                    if(!q.empty())
                    {
                        s.push(q.front());
                        q.pop();
                    }
                    else
                    {
                        break;
                    }
                    
                }
            }
        }
        if(n+1==c)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
