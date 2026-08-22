#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ma,ten,lop,email,nam;
		int nam1;
	public:
		friend istream &operator>>(istream &in,SinhVien &a){
			in>>a.ma;
			int t=0;
			cin>>ws;
			getline(in,a.ten);
			in>>a.lop>>a.email;
			a.nam="";
			a.nam=a.nam+a.lop[1];
			a.nam=a.nam+a.lop[2];
			return in;
		}
		friend ostream &operator<<(ostream &out,SinhVien a){
			out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
			return out;
		}
		string laynam(){
			return nam;
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
		cin>>s;
		string g="";
		g=g+s[2];
		g=g+s[3];
		cout<<"DANH SACH SINH VIEN KHOA ";
		cout<<s<<":"<<endl;
		for(int i=0;i<n;i++){
			if (ds[i].laynam()==g){
				cout<<ds[i];
			}
		}
	}
}
