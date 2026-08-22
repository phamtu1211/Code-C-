#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma,ten,lop,email,dn;
	int stt;
};
int d=1;
void nhap(SinhVien &a){
	a.stt=d;
	cin>>a.ma;
	cin>>ws;
	getline(cin,a.ten);
	cin>>a.lop;
	cin>>a.email;
	cin>>a.dn;
	d++;
}
bool kt(SinhVien a,SinhVien b){
	return (a.ma<b.ma);
}
void sapxep(SinhVien a[],int n){
	sort(a,a+n,kt);
}
void in(SinhVien a[],int n,string s[],int k){
	for(int j=0;j<k;j++){
		for(int i=0;i<n;i++){
			if (a[i].dn==s[j]) cout<<a[i].stt<<" "<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].email<<" "<<a[i].dn<<endl;
		}
	}
}
int main(){
	struct SinhVien a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		nhap(a[i]);
	}
	int k;
	cin>>k;
	string s[5];
	for(int i=0;i<k;i++){
		cin>>s[i];
	}
	sapxep(a,n);
	in(a,n,s,k);
}
