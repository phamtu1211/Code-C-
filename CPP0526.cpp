#include<bits/stdc++.h>
using namespace std;
struct Nguoi{
	string ten;
	char c;
	int n,t,nam;
};
void nhap(Nguoi a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i].ten;
		cin>>a[i].n>>a[i].c>>a[i].t>>a[i].c>>a[i].nam;
	}
}
bool ss1(Nguoi a,Nguoi b){
	if (a.t==b.t&&a.nam==b.nam) return (a.n>b.n);
	if (a.t>b.t&&a.nam==b.nam) return (a.t>b.t);
	return (a.nam>b.nam);
}
void ss(Nguoi a[],int n){
	sort(a,a+n,ss1);
}
void in(Nguoi a[],int n){
	cout<<a[0].ten<<endl<<a[n-1].ten;
}
int main(){
	struct Nguoi a[50];
	int n;
	cin>>n;
	nhap(a,n);
	ss(a,n);
	in(a,n);
}
