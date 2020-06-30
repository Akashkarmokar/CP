#include<bits/stdc++.h>
using namespace std;

#define sz 26
#define forbiden -1
#define not_visited 0
#define visited 1

int visit[sz][sz][sz];
int timee[sz][sz][sz];

int dx3[]={0,0,1,-1,0,0};
int dy3[]={0,0,0,0,-1,1};
int dz3[]={-1,1,0,0,0,0};

struct points
{
    int x,y,z;
    points(){};
    points(int x,int y,int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
};

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int tc;cin>>tc;
    for(int testcase=1;testcase<=tc;testcase++)
    {
        memset(visit,0,sizeof visit);
        string start,finish;
        cin>>start>>finish;
        int num;cin>>num;

        for(int i =0;i<num;i++)
        {
            string s1,s2,s3;
            cin>>s1>>s2>>s3;
            for(int j=0;j<s1.size();j++)
            {
                for(int k=0;k<s2.size();k++)
                {
                    for(int l=0;l<s3.size();l++)
                    {
                        visit[s1[j]-'a'][s2[k]-'a'][s3[l]-'a']=forbiden;
                    }
                }
            }
        }

        if(visit[start[0]-'a'][start[1]-'a'][start[2]-'a']==forbiden)
        {
            cout<<"Case "<<testcase<<": "<<"-1"<<endl;
            continue;
        }

        timee[start[0]-'a'][start[1]-'a'][start[2]-'a']=0;
        points p;
        queue<points>q;
        q.push(points(start[0]-'a',start[1]-'a',start[2]-'a'));
        visit[start[0]-'a'][start[1]-'a'][start[2]-'a']=visited;
        bool ok = true ;
        while(!q.empty() && ok )
        {
            p = q.front();
            q.pop();

            if(p.x==finish[0]-'a' && p.y==finish[1]-'a' && p.z==finish[2]-'a')
            {
                ok = false;
                break;
            }
            for(int i = 0 ;i<6;i++)
            {
                int new_x = (p.x + dx3[i])%26;
                int new_y = (p.y + dy3[i])%26;
                int new_z = (p.z + dz3[i])%26;

                if(new_x<0)
                    new_x+=26;
                if(new_y<0)
                    new_y+=26;
                if(new_z<0)
                    new_z+=26;
                if(visit[new_x][new_y][new_z]==not_visited)
                {
                    visit[new_x][new_y][new_z]=visited;
                    q.push(points(new_x,new_y,new_z));
                    timee[new_x][new_y][new_z]=timee[p.x][p.y][p.z]+1;
                }
            }
        }
        if(!ok)
            cout<<"Case "<<testcase<<": "<<timee[p.x][p.y][p.z]<<endl;
        else
            cout<<"Case "<<testcase<<": "<<"-1"<<endl;
    }
    return 0;
}
