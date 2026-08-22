#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten,lop,ns,ma;
	double gpa;
};
int d=1;
string chuanhoa(string a){
	stringstream ss(a);
	string tu;
	string ten="";
	while(ss>>tu){
		tu[0]=toupper(tu[0]);
		for(int i=1;i<tu.size();i++){
			tu[i]=tolower(tu[i]);
		}
		ten=ten+tu;
		ten=ten+" ";
	}
	return ten;
}
void nhap(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		a[i].ma="B20DCCN0";
		if (d<10) a[i].ma=a[i].ma+"0";
		a[i].ma=a[i].ma+to_string(d);
		d++;
		cin>>ws;
		getline(cin,a[i].ten);
		a[i].ten=chuanhoa(a[i].ten);
		cin>>a[i].lop;
		cin>>a[i].ns;
		if (a[i].ns[1]=='/') a[i].ns.insert(0,"0");
		if (a[i].ns[4]=='/') a[i].ns.insert(3,"0");
		cin>>a[i].gpa;
	}
}
bool dk(SinhVien a,SinhVien b){
	return (a.gpa>b.gpa);
}
void sapxep(SinhVien a[],int n){
	sort(a,a+n,dk);
}
void in(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i].ma<<" "<<a[i].ten<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].gpa<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
