#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau,tu1,mau1;
};
void nhap(PhanSo &ps){
	cin>>ps.tu>>ps.mau;
}
PhanSo tong(PhanSo p,PhanSo q){
	PhanSo k;
	k.tu=p.tu*q.mau+q.tu*p.mau;
	k.mau=p.mau*q.mau;
	return k;
}
long long uc(long long a,long long b){
	if (b==0) return a;
	return (uc(b,a%b));
}
void in(PhanSo t){
	t.mau1=t.mau/uc(t.tu,t.mau);
	t.tu1=t.tu/uc(t.tu,t.mau);
	cout<<t.tu1<<"/"<<t.mau1;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
