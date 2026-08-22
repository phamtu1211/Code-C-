#include<bits/stdc++.h>
using namespace std;
class DoanhNghiep{
	private:
		string ma,ten;
		int sl;
	public:
		friend istream &operator>>(istream &in,DoanhNghiep &a){
			in>>a.ma;
			in>>ws;
			getline(in,a.ten);
			in>>a.sl;
			return in;
		}
		friend ostream &operator<<(ostream &out,DoanhNghiep a){
			out<<a.ma<<" "<<a.ten<<" "<<a.sl<<endl;
			return out;
		}
		string layma(){
			return ma;
		}
		int laysl(){
			return sl;
		}
};
bool kt(DoanhNghiep a,DoanhNghiep b){
	if (a.laysl()==b.laysl()) return a.layma()<b.layma();
	return a.laysl()>b.laysl();
}
void sapxep(DoanhNghiep a[],int n){
	sort(a,a+n,kt);
}
int main(){
	int n;
	cin>>n;
	DoanhNghiep ds[1000];
	for(int i=0;i<n;i++){
		cin>>ds[i];
	}
	sapxep(ds,n);
	int x;
	cin>>x;
	for(int j=0;j<x;j++){
		int a,b;
		cin>>a>>b;
		cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<a<<" DEN "<<b<<" SINH VIEN:\n";
		for(int i=0;i<n;i++){
			if (ds[i].laysl()>=a&&ds[i].laysl()<=b) cout<<ds[i];
		}
	}
}
