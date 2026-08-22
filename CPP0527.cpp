#include<bits/stdc++.h>
using namespace std;
struct DanhSach{
	int g,p,s;
	long long t;
};
void nhap(DanhSach &a){
	cin>>a.g>>a.p>>a.s;
}
bool kt(DanhSach a,DanhSach b){
	if (a.g==b.g&&a.p==b.p) return (a.s<b.s);
	if (a.g==b.g) return (a.p<b.p);
	return(a.g<b.g);
}
void sapxep(DanhSach a[],int n){
	sort(a,a+n,kt);
}
void in(DanhSach a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i].g<<" "<<a[i].p<<" "<<a[i].s<<endl;
	}
}
int main(){
	struct DanhSach ds[5000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		nhap(ds[i]);
	}
	sapxep(ds,n);
	in(ds,n);
}
