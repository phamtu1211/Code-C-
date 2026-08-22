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
		friend istream &operator>>(istream &cin,PhanSo &a){
			cin>>a.tu>>a.mau;
			return cin;
		}
		friend PhanSo operator+(PhanSo a,PhanSo b){
			PhanSo c(1,1);
			c.mau=a.mau*b.mau;
			c.tu=a.mau*b.tu+b.mau*a.tu;
			long long t=uc(c.tu,c.mau);
			c.tu=c.tu/t;
			c.mau=c.mau/t;
			return c;
		}
		friend ostream &operator<<(ostream &cout,PhanSo a){
			cout<<a.tu<<"/"<<a.mau;
			return cout;
		}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
