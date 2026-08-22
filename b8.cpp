#include<bits/stdc++.h>
using namespace std;
struct diem{
	int x,y,z;
};
int main(){
	int t;
	cin>>t;
	while(t--){
		struct diem a[4];
		for(int i=0;i<4;i++) cin>>a[i].x>>a[i].y>>a[i].z;
		long long x1=a[1].x-a[0].x;
		long long y1=a[1].y-a[0].y;
		long long z1=a[1].z-a[0].z;
		long long x2=a[2].x-a[0].x;
		long long y2=a[2].y-a[0].y;
		long long z2=a[2].z-a[0].z;
		long long x0=y1*z2-y2*z1;
		long long y0=x2*z1-x1*z2;
		long long z0=x1*y2-y1*x2;
		long long k=(-x0*a[0].x-y0*a[0].y-z0*a[0].z);
		long long m=x0*a[3].x+y0*a[3].y+z0*a[3].z;
		if (m+k==0) cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
