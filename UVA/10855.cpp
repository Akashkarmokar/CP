#include<bits/stdc++.h>
using namespace std;

char big[500][500];
char small[500][500];
int n,m;


int found(int n,int m)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+m<=n && j+m<=n)
            {
                int cnt = 0;
                for(int k = 0;k<m;k++)
                {
                    for(int l=0;l<m;l++)
                    {
                        if(big[i+k][j+l]==small[k][l])
                        {
                            cnt++;
                        }
                    }
                }
                if(cnt==m*m)
                {
                    count++;
                }
            }
        }
    }

    return count;
}

void rotate(int x)
{
    char tmp[n][n];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            tmp[i][j]=small[x-j-1][i];
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            small[i][j]=tmp[i][j];
        }
    }
    
}
int main()
{
    // freopen("input.txt","r",stdin);

    while(cin>>n>>m && (n && m))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>big[i][j];
            }
        }


        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>small[i][j];
            }
        }

        for(int i=0;i<4;i++)
        {   
            if(i)
            {
                cout<<" ";
                rotate(m);
            }
            cout<<found(n,m);
        }
        cout<<endl;
    }
    return 0;
}