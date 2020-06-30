/*
problem solved by : Akash Karmokar 
                    Department of Computer Science And technology ,
                    Metropolitan University ,Sylhet ,Bangladesh.
*/

// prerequisite :  BFS and Modular arithmatic (BIG MOD)
// Time : 2.46
#include<bits/stdc++.h>
#include<stdio.h>
#include<queue>
using namespace std;

//Here use the mod function to find the reminder .For big int ans will be very big when if we find to remainder it will be 
// very costly . so we here use mod function .

int mod(string t,int divider){
    int length = t.length();
    int k =0;
    for(int i =0;i<length;i++){
        k = (k*10)+(t[i]-48);
        k = k % divider;
    }
    return k;
}

string bfs(int n){
    queue<string>q;
    string initial = "1";
    q.push(initial);
    while(!q.empty()){
        initial  = q.front();
        q.pop();
        int result = mod (initial,n);
        if(result == 0) return initial ;
        else if(visit.find(result)==visit.end()){
            visit.insert(result);
            q.push( initial + "0");
            q.push(initial + "1");
        }
    }
}

int main()
{
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int x;
        scanf("%d",&x);
        cout<<bfs(x)<<endl;
    }
    return 0;
}
