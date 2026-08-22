#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ma,ten,ns;
	double dtb,dyt;
};
int d=1;
void nhap(NhanVien &a){
	cin>>ws;
	a.ma="NV0";
	if (d<10) a.ma=a.ma+"0";
	string s=to_string(d);
	a.ma=a.ma+s;
	getline(cin,a.ten);
	cin>>a.ns>>a.dtb>>a.dyt;
	d++;
}
bool kt(NhanVien a,NhanVien b){
	if (a.dtb==b.dtb) return(a.dyt>b.dyt);
	return (a.dtb>b.dtb);
}
void in(NhanVien a[],int n){
	for(int i=0;i<n;i++){
		if (a[i].dtb>=8&&a[i].dyt>90) cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].ns<<" "<<a[i].dtb<<" "<<a[i].dyt<<endl;
	}
}
int main(){
	NhanVien a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		nhap(a[i]);
	}
	sort(a,a+n,kt);
	in(a,n);
}
