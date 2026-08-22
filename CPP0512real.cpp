#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	int tu,mau;
};
long long uc(long long a,long long b){
	if (b==0) return a;
	return uc(b,a%b);
}
void process(PhanSo a,PhanSo b){
	long long tu=a.tu*b.mau+b.tu*a.mau;
		long long mau=a.mau*b.mau;
		long long c=uc(tu,mau);
		tu=tu/c;
		mau=mau/c;
		long long c1=tu*tu;
		long long c2=mau*mau;
		cout<<c1<<"/"<<c2<<" ";
		long long d1=a.tu*b.tu*c1;
		long long d2=a.mau*b.mau*c2;
		long long u=uc(d1,d2);
		cout<<d1/u<<"/"<<d2/u<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
