/*
    Author : UntilOver
    Topic: 
    Prerequisite:
    Algorithm:
    TimeComplexity:
*/




#include "bits/stdc++.h"
#include <cstdlib>
using namespace std;
 
#define ll long long 
#define ull unsigned long long
#define debug(x)       { cerr << #x << " = " << x << endl; } 
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
const int Max = (int)2e5+5;
 
//functions
ll lcm(ll a,ll b) {if(a==0 || b==0){return 0;}else{return (a*b)/__gcd(a,b);}}
int bigmod(int a,int b,int m) {if(b==0) { return 1; } int x = bigmod(a,b/2,m); x = (x*x)%m; if(b%2==1) {x = (x*a)%m;} return x; }
 
//direction arry
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};
 
//____________________________________________________________________________________________________


class BST{
    int data;
    BST *left,*right;
public:
    // Default Constructor
    BST(){
        data = 0;
        left = right = NULL;
    }
    // Parameterized Constructor
    BST(int value){
        data = value;
        left = right = NULL;
    }
    // Insert function 
    BST* Insert(BST* root,int value){
        if(root== NULL){
            return new BST(value);
        }
        if(value < root->data){
            root->left = Insert(root->left, value);
        }else{
            root->right = Insert(root->right, value);
        }
        return root;

    }

    // Search / Contain function defination 
    BST* contain(BST *root,int value){
        if(root == NULL || root->data == value){
            return root;
        }
        if(value < root->data){
            return contain(root->left,value);
        }else{
            return contain(root->right,value);
        }
    }

    BST* minValueNode(BST* root){
        BST* current = root; 
        // loop down to find the left most(Inorder successor)
        while(current && current->left!=NULL){
            current = current->left;
        }
        return current;
    }

    // Delete a value from BST
    BST* deleteNode(BST *root,int value){
        // if the value to be deleted is smaller than root's value,
        // then it lies in left subtree
        if(value < root->data){
            root->left = deleteNode(root->left,value);
        }else if(value > root->data){ // if value is greater than root's value,it lies in right subtree
            root->right = deleteNode(root->right,value);
        }else{ // if value is same aas root's key , then this is the node to be deleted
            /* 
                 when we delete a node from BST , three posibilies arise
                 1. Node to be deleted is the leaf ---> simply remove from tree
                 2. Node to be deleted has only one child --> copy the child to the node and delete the child
                 3. Node to be deleted has two children . --> find inorder successor of the node. Copy content of the inorder
                                                              successor of the inorder successor to the node and delete the 
                                                              inorder successor.
            */

            // node has no child
            if(root->left==NULL && root->right==NULL){
                return NULL;
            }
            // node with only one child or no child
            else if(root->left==NULL){
                BST* temp = root->right;
                free(root);
                return temp;
            }
            else if(root->right==NULL){
                BST* temp = root->left;
                free(root);
                return temp;
            }

            // node with two children 
            BST* temp = minValueNode(root->right); // Get the inorder successor (Smallest in the right subtree)
            root->data = temp->data; //Copy the inorder successor's content to this node
            root->right = deleteNode(root->right,temp->data); //
        }
        return root;
    }

    // Inorder Traversal, when we traverse by INORDER in BST it gives value in sorting order
    void Inorder(BST *root){
        if(!root){
            return ;
        }
        Inorder(root->left);
        cout<<root->data<<endl;
        Inorder(root->right);
    }
};

 
void solve(){
    BST b, *root = NULL;
    root = b.Insert(root, 50);
    b.Insert(root, 30);
    b.Insert(root, 20);
    b.Insert(root, 40);
    b.Insert(root, 70);
    b.Insert(root, 60);
    b.Insert(root, 80);
 
    b.Inorder(root);

    if(b.contain(root, 30)){ // here 30 as a temp value to check 
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    b.deleteNode(root, 30);

    b.Inorder(root);
    if(b.contain(root, 30)){ // here 30 as a temp value to check 
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
}
 
int main(){
    fastread;
    int tc=1;
    // cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}