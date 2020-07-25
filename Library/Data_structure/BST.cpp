#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    struct node *left,*right;
};


// Search 
bool search(struct node *root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->key==key)
    {
        return true;
    }
    else if (root->key < key) 
       return search(root->right, key); 
    else
        return search(root->left, key); 
    
}


struct node *newNode(int item)
{
    struct node *tmp = (struct node*)malloc(sizeof(struct node));
    tmp->key=item;
    tmp->left=tmp->right=NULL;
    return tmp;
}

// Inorder print function
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

// Insert
struct node *insert(struct node *node,int key)
{
    if(node==NULL)
    {
        return newNode(key);
    }
    if(key<node->key)
        node->left=insert(node->left,key);
    else if(key>node->key)
        node->right=insert(node->right,key);
}   

struct node* deletenode(struct node*root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(key<root->key)
        root->left=deletenode(root->left,key);
    else if(key>root->key)
        root->right=deletenode(root->right,key);
    else //for equal value 
    {
        if(root->left==NULL) //for no child or 1 child
        {
            struct node *tmp = root->right;
            free(root);
            return tmp;
        }
        else if(root->right==NULL)
        {
            struct node*tmp = root->left;
            free(root);
            return tmp;
        }
        // for 2 child
        struct node *tmp = findmin(root->right);
        root->key=tmp->key;
        root->right=deletenode(root->right,tmp->key);
    }
}   

int main()
{
    struct node *root = NULL;
    root = insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);

    inorder(root);

    if(search(root,50))
        cout<<"Found"<<endl;
    else
        cout<<"NOT Found"<<endl;

    return 0;
}