#include <bits/stdc++.h>
using namespace std;


void pr(vector<string>& a){
	cout<<"Pr"<<endl;
	int n = a.size();
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	cout<<"pr"<<endl;
}

void rotate90Clock(vector<string>& a){
	int N = a.size();
	// Traverse each cycle 
	for(int i=0;i<N/2;i++){
		for(int j=i;j<N-i-1;j++){
			int temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
		}
	}
	pr(a);
}

bool isSame(vector<string>& a, vector<string>& b){
	
	int n = a.size();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]!=b[i][j]){
				return false;
			}
		}
	}
	return true;
}



void run_case(){
	int n; 
	scanf("%d",&n);
	vector<string>first(n),second(n);
	for(int i=0;i<n;i++){
		cin>>first[i];
	}
	for(int i=0;i<n;i++){
		cin>>second[i];
	}
	if(isSame(first,second)){
		cout<<"Yes"<<endl;
		return;
	}
	for(int i=0;i<4;i++){
		rotate90Clock(second);
		if(isSame(first,second)){
			cout<<"Yes"<<endl;
			return;
		}
	}

	cout<<"No"<<endl;
	
}

int main(){
	int tc = 1;
	cin>>tc;
	while(tc--){
		run_case();
	}
	return 0;
}