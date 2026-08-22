#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string t,l,ns;
	double gpa;
};
	void nhapThongTinSV(SinhVien &a){
		getline(cin,a.t);
		cin>>a.l>>a.ns>>a.gpa;
		if(a.ns[1]=='/') a.ns.insert(0,"0");
		if(a.ns[4]=='/') a.ns.insert(3,"0");
	}	
	void inThongTinSV(SinhVien a){
		cout<<"N20DCCN001 "<<a.t<<"	"<<a.l<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
	}


int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}

