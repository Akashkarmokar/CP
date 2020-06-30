#include<stdio.h>
#define size 204
#define red 1
#define blue 2

int front=0,reare=0;
int queue[size];
void push(int value){
    queue[reare]=value;
    reare++;
}
void pop(){
    front++;
}
int isBipartait(int nodes,int edges){
    int i,node1,node2,source_node;
    int adj_mat[size][size]={};
    int color[size]={};
    int visited[size]={};
    for(i=0;i<edges;i++){
        scanf("%d %d",&node1,&node2);
        adj_mat[node1][node2]=1;
        adj_mat[node2][node1]=1;
        if(i==0){
            source_node=node1;
        }
    }
    push(source_node);
    visited[source_node]=1;
    while(1){
        int u = queue[front];
        if(color[u]==0){
            color[u]=red;
        }
        pop();
        for(i=0;i<nodes;i++){
            if(adj_mat[u][i]==1){
                if(visited[i]==0){
                    visited[i]=1;
                    push(i);
                    if(color[i]==0){
                        if(color[u]==red){
                            color[i]=blue;
                        }
                        else if(color[u]==blue){
                            color[i]=red;
                        }
                    }
                }
                else if(visited[i]==1){
                    if(color[u]==color[i]){
                        return 0;
                    }
                }
            }
        }
        if(front==reare){
            break;
        }
    }
    return 1;

}
int main(){
    int nodes,edges;
    while(scanf("%d",&nodes)==1){
        if(nodes==0){
            break;
        }
        scanf("%d",&edges);
        int n = isBipartait(nodes,edges);
        if(n==1){
            printf("BICOLORABLE.\n");
        }
        else{
            printf("NOT BICOLORABLE.\n");
        }
    }
    return 0;
}
