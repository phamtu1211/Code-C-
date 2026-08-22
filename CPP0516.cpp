#include<bits/stdc++.h>
using namespace std;
struct Mathang{
	string ten,nhom;
	double mua,ban,loi;
	int ma;
};
void nhap(Mathang a[],int n){
	for(int i=0;i<n;i++){
		a[i].ma=i+1;
		cin>>ws;
		getline(cin,a[i].ten);
		cin>>ws;
		getline(cin,a[i].nhom);
		cin>>a[i].mua>>a[i].ban;
		a[i].loi=a[i].ban-a[i].mua;
	}
}
bool dk(Mathang a,Mathang b){
	return a.loi>b.loi;
}
void sapxep(Mathang a[],int n){
	sort(a,a+n,dk);
}
void in(Mathang a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].nhom<<" "<<fixed<<setprecision(2)<<a[i].loi<<endl;
	}
}
int main(){
	struct Mathang ds[50];
	int n;
	cin>>n;
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
	
}
