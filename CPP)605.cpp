#include<bits/stdc++.h>
using namespace std;
long long uc(long long a,long long b){
	if (b==0) return a;
	return uc(b,a%b);
}
class PhanSo{
	private:
		long long tu,mau;
	public:
		PhanSo(long long tu=0,long long mau=1){
		this ->tu=tu;
		this ->mau=mau;
	}	
	void rutgon(){
		long long u=uc(tu,mau);
		tu=tu/u;
		mau=mau/u;
	}
	friend istream &operator>>(istream &in,PhanSo &p){
		in>>p.tu>>p.mau;
		return in;
	}
	friend ostream &operator<<(ostream &out, PhanSo p){
		out<<p.tu<<"/"<<p.mau;
		return out;
	}
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
