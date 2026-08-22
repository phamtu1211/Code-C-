#include<bits/stdc++.h>
using namespace std;
long long uc(long long a,long long b){
	if (b==0) return a;
	return uc(b,a%b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int t1,t2,m1,m2;
		cin>>t1>>m1>>t2>>m2;
		long long tu=t1*m2+t2*m1;
		long long mau=m1*m2;
		long long a=uc(tu,mau);
		tu=tu/a;
		mau=mau/a;
		long long c1=tu*tu;
		long long c2=mau*mau;
		cout<<c1<<"/"<<c2<<" ";
		long long d1=t1*t2*c1;
		long long d2=m1*m2*c2;
		long long u=uc(d1,d2);
		cout<<d1/u<<"/"<<d2/u<<endl;
	}
}
