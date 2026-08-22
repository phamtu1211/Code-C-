#include<bits/stdc++.h>
using namespace std;
int d=1;
class MatHang{
	private:
		string ten,nhom;
		double mua,ban,loi;
		int ma;
	public:
		friend istream &operator>>(istream &cin,MatHang &a){
				a.ma=d;
				d++;
				cin>>ws;
				getline(cin,a.ten);
				cin>>ws;
				getline(cin,a.nhom);
				cin>>a.mua>>a.ban;
				a.loi=a.ban-a.mua;
				return cin;
			}
		friend ostream &operator<<(ostream &cout,MatHang a){
			cout<<a.ma<<" "<<a.ten<<" "<<a.nhom<<" "<<fixed<<setprecision(2)<<a.loi<<endl;
			return cout;
		}
		double layloi(){
			return loi;
		}
};
bool dk(MatHang a,MatHang b){
	return (a.layloi()>b.layloi());
}
void sapxep(MatHang a[],int n){
	sort(a,a+n,dk);
}
int main(){
	class MatHang mh[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>mh[i];
	}
	sapxep(mh,n);
	for(int i=0;i<n;i++){
		cout<<mh[i];
	}
}
