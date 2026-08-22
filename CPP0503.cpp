#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long a,b,a1,b1;
};
void nhap(PhanSo &p){
	cin>>p.a>>p.b;
}
long long uc(long long a,long long b){
	if (b==0) return a;
	return (uc(b,a%b));
}
void rutgon(PhanSo &p){
	p.a1=p.a/uc(p.a,p.b);
	p.b1=p.b/uc(p.a,p.b);
}
void in(PhanSo &p){
	cout<<p.a1<<"/"<<p.b1;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
