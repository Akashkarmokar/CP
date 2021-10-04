// https://arpitbhayani.me/blogs/persistent-data-structures-introduction
// https://arpitbhayani.me/blogs/fully-persistent-arrays


#include <bits/stdc++.h>
using namespace std;



// persisteant array
template<typename T>
struct PersistentArray { // 0-indexed
public:
  struct node {
    node* l, * r; T x;
  };
  int size = 0; // Size of persistentArray 
  vector<node*> root; // by calling root.size() you get total version and have acces to this root vector
  int build(vector<T> v) { // Time Complexity: O(nlogn)
  	size = v.size();
    while (n < v.size()) n <<= 1;
    root.push_back(build(0, n - 1, v));
    return root.size() - 1; // return version number after build operation
  }
  
  // get the ith value of the rth array
  T get_val(int r, int i) { // Time Complexity: O(logn)
    return get_val(root[r], i, 0, n - 1);
  }
  
  // update the ith value if the rth array by x and return the new root of the array
  int upd(int r, int i, T x) { // Time Complexity: O(logn)
    root.push_back(upd(root[r], i, x, 0, n - 1));
    return root.size() - 1; // return version number after update operation
  }
  

private:
  int n = 1;

  node* build(int l, int r, vector<T>& v) {
    node* cur = new node();
    if (l == r) {
      if (l < v.size()) cur -> x = v[l];
      else cur -> x = 0;
    }
    else {
      cur -> l = build(l, (l + r) >> 1, v);
      cur -> r = build(((l + r) >> 1) + 1, r, v);
    }
    return cur;
  }


  T get_val(node* cur, int i, int l, int r) {
    if (l == r) return cur -> x;
    if (i <= ((l + r) >> 1)) return get_val(cur -> l, i, l, (l + r) >> 1);
    else return get_val(cur -> r, i, ((l + r) >> 1) + 1, r);
  }

  // node update function
  node* upd(node* pre, int i, T x, int l, int r) {
    node* cur = new node();
    if (l == r){
      cur -> x = x;
    }
    else {
      if (i <= ((l + r) >> 1)) {
        cur -> l = upd(pre -> l, i, x, l, (l + r) >> 1);
        cur -> r = pre -> r;
      }
      else {
        cur -> l = pre -> l;
        cur -> r = upd(pre -> r, i, x, ((l + r) >> 1) + 1, r);
      }
    }
    return cur;
  }
};



void showArray(PersistentArray<int>& PerArray,int version){
	for(int i=0;i<PerArray.size;i++){
		cout<<PerArray.get_val(version,i)<<" ";
	}
	cout<<endl;
}

void run_case(){
	vector<int> a = {1,2,3,4,5};
	PersistentArray<int> myPerArray;
	cout<<" --"<<myPerArray.build(a)<<endl;
	// cout<<myPerArray.get_val(0,2)<<endl;
	showArray(myPerArray,0);
	myPerArray.upd(0,2,5);
	showArray(myPerArray,1);
	cout<<myPerArray.root.size()<<endl;
	// cout<<myPerArray.get_val(1,2)<<endl;
	// cout<<myPerArray.n<<endl;




}

int main(){
	int tc = 1;
	// cin>>tc;
	while(tc--){
		run_case();
	}

	return 0;
}