#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	double k,w,ans=0;
	scanf("%d %lf",&n,&k);
	for(int i =0;i<n;i++){
		scanf("%lf",&w);
		//printf("%lf\n",ceil(w/k));
		ans += ceil(w/k);

	}
	printf("%d\n",(int)ceil(ans/2));
	return 0;
}