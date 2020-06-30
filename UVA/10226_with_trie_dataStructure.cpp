#include<bits/stdc++.h>
using namespace std;

struct node
{
    bool endmark;
    int cnt ;
    node* next[128];
    node()
    {
        endmark = false;
        cnt = 0;
        for(int i=0;i<128;i++)
        {
            next[i]=NULL;
        }
    }
} *root;

// Insert Function
void insert(string str,int len)
{
    node* cur = root;
    for(int i=0;i<len;i++)
    {
        int id = (int)str[i];
        if(cur->next[id]==NULL)
        {
            cur->next[id] = new node();
        }
        cur=cur->next[id];
    }
    cur->endmark=1;
    cur->cnt++;
}
void printword(char *word,int pos,int cnt,int total)
{
    for(int i=0;i<pos;i++)
    {
        cout<<word[i];
    }
    printf(" %.4lf\n",(double)cnt*(double)100.0/total);
}

void print_out(struct node*cur,char *word,int pos,int total)
{
    if(cur==NULL)
    {
        return ;
    }
    if(cur->endmark)
    {
        printword(word,pos,cur->cnt,total);
    }
    for(int i=0;i<128;i++)
    {
        if(cur->next[i])
        {
            word[pos]=(char)i;
            print_out(cur->next[i],word,pos+1,total);
        }
    }
}
int main()
{
    int testcase;
    scanf("%d",&testcase);
    getchar();
    getchar();
    while(testcase--)
    {
        string str;
        int total = 0;
        root = new node();
        while(getline(cin,str))
        {
            if(str.length()==0)
            {
                break;
            }
            insert(str,str.length());
            total++;
        }
        // cout<<"total:__________"<<total<<endl;
        char word[40];
        print_out(root,word,0,total);

        if(testcase)
            puts("");
    }
    
    return 0;
}
