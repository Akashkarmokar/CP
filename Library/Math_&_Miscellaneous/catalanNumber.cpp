/* Time Complexity : O(n^2)

	Application in some combinatorial problems
	The Catalan number Cn is the solution for

	-Number of correct bracket sequence consisting of n opening and n closing brackets.
	-The number of rooted full binary trees with n+1 leaves (vertices are not numbered). A rooted binary tree is full if every vertex has either two children or no children.
	-The number of ways to completely parenthesize n+1 factors.
	-The number of triangulations of a convex polygon with n+2 sides (i.e. the number of partitions of polygon into disjoint triangles by using the diagonals).
	-The number of ways to connect the 2n points on a circle to form n disjoint chords.
	-The number of non-isomorphic full binary trees with n internal nodes (i.e. nodes having at least one son).
	-The number of monotonic lattice paths from point (0,0) to point (n,n) in a square lattice of size n×n, which do not pass above the main diagonal (i.e. connecting (0,0) to (n,n)).
	-Number of permutations of length n that can be stack sorted (i.e. it can be shown that the rearrangement is stack sorted if and only if there is no such index i<j<k, such that ak<ai<aj ).
	-The number of non-crossing partitions of a set of n elements.
	-The number of ways to cover the ladder 1…n using n rectangles (The ladder consists of n columns, where ith column has a height i).

*/


#include <bits/stdc++.h>
using namespace	 std;

const int MOD = 1e9+7;
const int MAX = 1e4;

// catalan Array 
int catalan[MAX];

void initCatalan(int maxNumber){
	if(maxNumber> MAX){
		cout<<"maxNumber is greater than MAX value"<<endl;
		return;
	}
	catalan[0] = catalan[1] = 1;
	for(int i=2;i<=maxNumber;i++){
		catalan[i] = 0;
		for(int j=0;j<i;j++){
			catalan[i] +=(catalan[j] * catalan[(i-1)-j])%MOD;
			if(catalan[i]>=MOD){
				catalan[i] -= MOD;

			}
		}
	}
}

int main(){
	int maxCatalan = 4;
	initCatalan(maxCatalan);
	for(int i = 0;i<=maxCatalan;i++){
		cout<<catalan[i]<<" ";
	}
	cout<<endl;
	return 0;
}