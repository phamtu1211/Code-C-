#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma,ten,lop;
	int n,t,nam;
	char c;
	double gpa;
};
void nhapThongTinSV(SinhVien &a){
	a.ma="N20DCCN001";
	getline(cin,a.ten);
	cin>>a.lop>>a.n>>a.c>>a.t>>a.c>>a.nam>>a.gpa;
}
void inThongTinSV(SinhVien &a){
	cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" ";
	if (a.n<10) cout<<"0";
	cout<<a.n<<a.c;
	if (a.t<10) cout<<"0";
	cout<<a.t<<a.c<<a.nam<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
