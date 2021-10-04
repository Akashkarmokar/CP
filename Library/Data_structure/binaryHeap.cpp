#include <array>
#include <bits/stdc++.h>
using namespace std;

/* This procees use additional array to build a Heap Array 
	If we use Binary Heap to sort an array we don't need this process .
	without creating extra Heap Array we can do sort with siftUp and siftDown process.
*/
// int heapMaxSize = 1000;
// int heapSize = 0;
// int H[1000];

// void insert(int x){
// 	H[heapSize] = x;
// 	heapSize++;
// 	// fix broken properties i,e: sift_up
// 	int i = heapSize - 1;
// 	while( i> 0 && H[i]<H[(i-1)/2]){
// 		swap(H[i],H[(i-1)/2]);
// 		i = (i-1)/2;
// 	}
// }

// int remove_min(){
// 	swap(H[0],H[heapSize-1]); // swap root and last element 
// 	heapSize--; // remove root which is at now in last index
// 	// fix broken properties
// 	int i = 0; // initially we are at root index 
// 	while(2*i+1<heapSize){
// 		int j = 2*i + 1; // left child
// 		if(2*i+2<heapSize && H[2*i+2] < H[j]){
// 			j = 2*i+2;
// 		}
// 		if(H[j] >= H[i]){
// 			break;
// 		}
// 		swap(H[i],H[j]);
// 		i = j;
// 	}

// 	return H[heapSize];
// }

// void heapSort(vector<int>& a){
// 	int n = (int)a.size();
// 	for(int i=0;i<n;i++){
// 		insert(a[i]);
// 	}
// 	for(int i=0;i<n;i++){
// 		a[i] = remove_min();
// 	}
// }



/*
	To sort an Array with Binary Heap Data Structure we don't need to 
	build any additional array. 
	There we use siftUp and siftDown process on array 
*/

void MinsifitUp(int from,vector<int>& a){
	while(from>0 && a[from]< a[(from-1)/2]){
		swap(a[from],a[(from-1)/2]);
		from = (from-1)/2;
	}
}

void MinsiftDown(int from,int to,vector<int>& a){
	int n = to;
	while((2*from)+1 < n ){
		int j = (2*from)+1; // left child
		if((2*from)+2 < n && a[(2*from)+2]<a[j]){
			j = (2*from)+2;
		}
		if(a[j]>=a[from]){
			break;
		}
		swap(a[j],a[from]);
		from = j;
	}
}

void MinheapSort(vector<int>& a){
	int n = (int)a.size();
	for(int i=0;i<n;i++){
		MinsifitUp(i,a);
	}
	for(int i=n-1;i>=0;i--){
		swap(a[0],a[i]);
		MinsiftDown(0,i,a);
	}
}


void MaxsifitUp(int from,vector<int>& a){
	while(from>0 && a[from] > a[(from-1)/2]){
		swap(a[from],a[(from-1)/2]);
		from = (from-1)/2;
	}
}

void MaxsiftDown(int from,int to,vector<int>& a){
	int n = to;
	while((2*from)+1 < n ){
		int j = (2*from)+1; // left child
		if((2*from)+2 < n && a[(2*from)+2]>a[j]){
			j = (2*from)+2;
		}
		if(a[j]<=a[from]){
			break;
		}
		swap(a[j],a[from]);
		from = j;
	}
}

void MaxheapSort(vector<int>& a){
	int n = (int)a.size();
	for(int i=0;i<n;i++){
		MaxsifitUp(i,a);
	}
	for(int i=n-1;i>=0;i--){
		swap(a[0],a[i]);
		MaxsiftDown(0,i,a);
	}
}

int main(){
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	/* this portion use addition heap array 
	for(int i=0;i<n;i++){
		insert(a[i]);
	}
	for(int i=0;i<n;i++){
		cout<<H[i]<<" ";
	}
	cout<<endl; 
	*/
	// heapSort(a);
	// for(auto it:a){
	// 	cout<<it<<" ";
	// }
	// cout<<endl;



	MaxheapSort(a);
	cout<<"Max Heap Sort(ASC ORDER):"<<endl;
	for(auto it:a){
		cout<<it<<" ";
	}
	cout<<endl;

	MinheapSort(a);
	cout<<"Min Heap Sort(DES ORDER) :"<<endl;
	for(auto it:a){
		cout<<it<<" ";
	}
	cout<<endl;


	// for(auto it:a){
	// 	cout<<it<<" ";
	// }
	// cout<<endl;
	return 0;
}