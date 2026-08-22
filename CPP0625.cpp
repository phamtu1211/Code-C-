#include<bits/stdc++.h>
using namespace std;
int d=1;
class GiangVien{
	private:
		string ma,ten,mon,ten1,mon1;
	public:
		friend istream &operator>>(istream &in,GiangVien &a){
			cin>>ws;
			a.ma="GV";
			if (d<10) a.ma=a.ma+"0";
			a.ma=a.ma+to_string(d);
			d++;
			getline(in,a.ten);
			cin>>ws;
			getline(in,a.mon);
			stringstream ss(a.mon);
			string tu1;
			a.mon1="";
			while(ss>>tu1){
				char c=toupper(tu1[0]);
				a.mon1=a.mon1+c;
			}
			a.ten1="";
			for(int i=0;i<a.ten.size();i++){
				char tu=tolower(a.ten[i]);
				a.ten1=a.ten1+tu;
			}
			return in;
		}
		friend ostream &operator<<(ostream &out,GiangVien a){
			out<<a.ma<<" "<<a.ten<<" "<<a.mon1<<endl;
			return out;
		}
		string layten(){
			return ten1;
		}
};
int main(){
	int n;
	cin>>n;
	GiangVien ds[1000];
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
		for(int k=0;k<s.size();k++){
			char c=tolower(s[k]);
			s1=s1+c;
		}
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":\n";
		for(int i=0;i<n;i++){
			stringstream ss(ds[i].layten());
			string tu;
			int kt=1;
			while(ss>>tu){
				if (tu.find(s1)!=string::npos){
					kt=0;
					break;
				}
			}
			if (kt==0) cout<<ds[i];
		}
	}
}
