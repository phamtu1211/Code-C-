#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ten,lop,ma;
		double gpa;	
		string ns;
	public:
		SinhVien(){
			ma="";
			ten="";
			lop="";
			ns="";
			gpa=0;
		}
		void nhap(){
			ma="B20DCCN001";
			getline(cin,ten);
			cin>>lop;
			cin>>ns;
			cin>>gpa;
			if (ns[1]=='/') ns.insert(0,"0");
			if (ns[4]=='/') ns.insert(3,"0");
		}
		void xuat(){
			cout<<ma<<" "<<ten<<" "<<lop<<" ";
			cout<<ns<<" "<<fixed<<setprecision(2)<<gpa;
		}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
