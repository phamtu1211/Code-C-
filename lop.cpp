#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ten,lop,ma;
	public:
		friend istream &operator>>(istream &cin,SinhVien &a){
			cin>>ws;
			getline(cin,a.ten);
			cin>>a.ma>>a.lop;
			return cin;
		}
		friend ostream &operator<<(ostream &cout,SinhVien a){
			cout<<a.ten<<" "<<a.ma<<" "<<a.lop<<endl;
			return cout;
		}
		string layten(){
			return ten;
		}
};
bool dk(SinhVien a,SinhVien b){
	return (a.layten()<b.layten());
}
void sapxep(SinhVien a[],int n){
	sort(a,a+n,dk);
}
int main(){
	SinhVien a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sapxep(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
