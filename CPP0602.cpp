#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s){
	string a="";
	stringstream ss(s);
	string tu;
	while(ss>>tu){
		tu[0]=toupper(tu[0]);
		for(int i=1;i<tu.size();i++){
			tu[i]=tolower(tu[i]);
		}
		a=a+tu;
		a=a+" ";
	}
	return a;
}
class SinhVien{
	private:
		string ten,ma,lop,ns;
		double gpa;
	public:
		SinhVien(){
		}
		friend istream& operator>>(istream &in,SinhVien &a){
			a.ma="B20DCCN001";
			in>>ws;
			getline(in,a.ten);
			a.ten=chuanhoa(a.ten);
			in>>a.lop>>a.ns>>a.gpa;
			if (a.ns[1]=='/') a.ns.insert(0,"0");
			if (a.ns[4]=='/') a.ns.insert(3,"0");
			return in;
		}
		friend ostream& operator<<(ostream &out, const SinhVien&a){
			out<<a.ma<<" "<<a.ten<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
			return out;
		}		
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
