#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+5;
int arr[mx];
int tree[4*mx];

void build(int node,int b,int e){
	if(b==e){
		tree[node] = arr[b]%3==0 ? 0:;
		return;
	}
	int left = node*2;
	int right = node*2+1;
	int mid = (b+e)/2;
	build(left,b,mid);
	build(right,mid+1,e);
	tree[node] = tree[left] + tree[right];
}

int query(int node,int b,int e,int i,int j){
	if(j<b || e<i){
		return 0;
	}
	if(b>=i && e<=j){
		return tree[node];
	}
	int left = node*2;
	int right = node*2+1;
	int mid = (b+e)/2;

	int p1 = query(left, b, mid, i, j);
	int p2 = query(right, mid+1, e, i, j);
	return p1+p2;
}

int main(){
	int n,q;
	cin>>n>>q;
	build(1,1,n);
	while(q--){
		bool id;
		int a,b;
		cin>>id>>a>>b;
		if(id){
			int ans = query(1,1,n,a,b);
			cout<<ans<<endl;
		}else{
			for(int i=a;i<=b;i++){
				update(1,1,n,i,1);
			}
		}
	}
	return 0;
}