#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ma,ten,lop;
	int n,t,nam;
	char c;
	double gpa;
};
void nhap(SinhVien &s){
	getline(cin,s.ten);
	s.ma="B20DCCN001";
	cin>>s.lop>>s.n>>s.c>>s.t>>s.c>>s.nam>>s.gpa;
}
void in(SinhVien &s){
	cout<<s.ma<<" "<<s.ten<<" "<<s.lop<<" ";
	if (s.n<10) cout<<"0";
	cout<<s.n<<s.c;
	if (s.t<10) cout<<"0";
	cout<<s.t<<s.c<<s.nam<<" "<<fixed<<setprecision(2)<<s.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
