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
		PhanSo(long long t,long long m){
			tu=t;
			mau=m;
		}
		friend PhanSo operator+(PhanSo x,PhanSo y) {
			PhanSo c(1,1);
			c.tu=x.tu*y.mau+y.tu*x.mau;
			c.mau=x.mau*y.mau;
			long long u=uc(c.tu,c.mau);
			c.tu=c.tu/u;
			c.mau=c.mau/u;
			return c;
		}
		friend istream &operator>>(istream &in,PhanSo &a){
			in>>a.tu>>a.mau;
			return in;
		}
		friend ostream &operator<<(ostream &out,PhanSo a){
			out<<a.tu<<"/"<<a.mau;
			return out;
		}
		
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
