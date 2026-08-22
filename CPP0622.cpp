#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ma,ten,lop,email;
		string lop1,ma1;
	public:
		friend istream &operator>>(istream &in,SinhVien &a){
			cin>>a.ma;
			cin>>ws;
			getline(cin,a.ten);
			cin>>a.lop>>a.email;
			a.lop1="";
			a.ma1="";
			a.lop1=a.lop1+a.lop[0];
			for(int i=3;i<=6;i++){
				a.ma1=a.ma1+a.ma[i];
			}
			return in;
		}
		friend ostream &operator<<(ostream &out,SinhVien a){
			cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
			return out;
		}
		string laylop(){
			return lop1;
		}
		string layma(){
			return ma1;
		}
};	
	
int main(){
	SinhVien ds[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ds[i];
	}
	int x;
	cin>>x;
	string s;
	for(int j=0;j<x;j++){
		cin>>ws;
		getline(cin,s);
		string s1="";
		for(int i=0;i<s.size();i++){
			char c=toupper(s[i]);
			s1=s1+c;
		}
		cout<<"DANH SACH SINH VIEN NGANH "<<s1<<":\n";
		for(int i=0;i<n;i++){
			if (s=="Ke toan"&&ds[i].layma()=="DCKT") cout<<ds[i];
			if (s=="Cong nghe thong tin"&&ds[i].layma()=="DCCN"&&ds[i].laylop()!="E") cout<<ds[i];
			if (s=="An toan thong tin"&&ds[i].layma()=="DCAT"&&ds[i].laylop()!="E") cout<<ds[i];
			if (s=="Vien thong"&&ds[i].layma()=="DCVT") cout<<ds[i];
			if (s=="Dien tu"&&ds[i].layma()=="DCDT") cout<<ds[i];
			}
	}
}
