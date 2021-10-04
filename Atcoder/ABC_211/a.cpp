#include "bits/stdc++.h"
#include <iomanip>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;

	double ans = (a-b+3*b)/3.0;
	cout<<setprecision(10)<<ans<<endl;

	return 0;
}