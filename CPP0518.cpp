#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ma,ten,gt,dc,nk;
	int n,t,nam;
	long long ms;
	char c;
};
int d=0;
void nhap(NhanVien &a){
	if (d+1<10) a.ma="0000";
	else
	a.ma="000";
	string s=to_string(d+1);
	a.ma.insert(a.ma.size(),s);
	cin>>ws;
	getline(cin,a.ten);
	cin>>a.gt>>a.t>>a.c>>a.n>>a.c>>a.nam;
	cin>>ws;
	getline(cin,a.dc);
	cin>>a.ms>>a.nk;
	d++;
}
bool kt(NhanVien a,NhanVien b){
	if (a.nam==b.nam&&a.t==b.t)return (a.n<b.n);
	if (a.nam==b.nam) return (a.t<b.t);
	return (a.nam<b.nam);
}
void sapxep(NhanVien a[],int n){
	sort(a,a+n,kt);
}
void inds(NhanVien a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].gt<<" ";
		if (a[i].t<10)cout<<"0";
		cout<<a[i].t<<a[i].c;
		if (a[i].n<10)cout<<"0";
		cout<<a[i].n<<a[i].c<<a[i].nam<<" "<<a[i].dc<<" "<<a[i].ms<<" "<<a[i].nk<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
