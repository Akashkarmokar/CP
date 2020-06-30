/*
    Problem solved By:        Akash Karmokar    Email: akashcsemu@gmail.com
                    Department of Computer science and technology
                    Metropolitan University,sylhet,Bangladesh.
                    
*/


#include<bits/stdc++.h>
#define pii pair<int,int>
#define clear(a) memset(a, 0, sizeof(a))
//#define valid(new_x, new_y) new_x>=1 && new_x<=8 && new_y>=1 && new_y<=8

using namespace std;

bool visit[10][10];
int dis[10][10];
string s1,s2;
//direction array
int di_x[]={1, -1, 1, -1, 2, 2, -2, -2};
int di_y[]={2, 2, -2, -2, 1, -1, 1, -1};

void bfs(int sx,int sy,int dx,int dy){
    queue<pii>q;
    clear(visit);
    q.push(make_pair(sx,sy));
    visit[sx][sy]=true;
    dis[sx][sy]=0;
    while(!q.empty()){
        pii top = q.front();
        q.pop();
        if(top.first==dx && top.second == dy){
            cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<dis[top.first][top.second]<<" knight moves."<<"\n";
            return ;
        }
        for(int i =0;i<8;i++){
          int new_x =  top.first+di_x[i];
          int new_y =  top.second+di_y[i];
          if( (new_x>0 && new_x<=8) && (new_y>0 && new_y<=8) && !visit[new_x][new_y]){
                visit[new_x][new_y]=true;
                dis[new_x][new_y] = dis[top.first][top.second]+1;
                q.push(pii(new_x,new_y));
          }
        }
    }

    
}
int main(){
    while(cin>>s1>>s2){
        int sx = s1[0]-96; // convert to int value
        int sy = s1[1]-'0'; // convert to int value 
        int dx = s2[0]-96;
        int dy = s2[1]-'0';
        bfs(sx,sy,dx,dy);
    }
    return 0;
}
