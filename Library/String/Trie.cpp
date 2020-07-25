#include<bits/stdc++.h>
using namespace std;

// Creating new node 
struct node
{
    bool endmark;
    node* next[27];
    node()
    {
        endmark = false;
        for(int i=0;i<26;i++)
        {
            next[i]=NULL;
        }
    }
} *root;

//insert function
void insert(string str,int len)
{
    node* cur = root;
    for(int i=0;i<len;i++)
    {
        int id = str[i]-'a';
        if(cur->next[id]==NULL)
        {
            cur->next[id] = new node();
        }
        cur=cur->next[id];
    }
    cur->endmark=1;
}

//Search Function
bool search(string str,int len)
{
    node* cur = root;
    for(int i=0;i<len;i++)
    {
        int id = str[i]-'a';
        if(cur->next[id]==NULL)
        {
            return false;
        }
        cur=cur->next[id];
    }
    return cur->endmark;
}

//Delete Funtion
void del(node *cur) // It is recursion function
{
    for(int i=0;i<26;i++)
    {
        if(cur->next[i])
        {
            del(cur->next[i]);
        }
    }
    delete(cur);
}

int main()
{
    int num_of_word,no_of_search_word;
    string str,str1;
    cout<<"Enter the number of word"<<endl;
    cin>>num_of_word;
    root=new node();
    // root = (struct node*)malloc(sizeof(struct node));

    // Inputing
    for(int i=0;i<num_of_word;i++)
    {
        cin>>str;
        insert(str,str.length());
    }
    cout<<"Enter the number of search query :"<<endl;
    cin>>no_of_search_word;
    
    // Searching 
    for(int i=0;i<no_of_search_word;i++)
    {
        cin>>str1;
        if(search(str1,str1.length()))
        {
            cout<<"FOUND"<<endl;
        }
        else
        {
            cout<<"Not Found"<<endl;
        }
    }
    del(root); //Deleting all nodes 
    return 0;
}