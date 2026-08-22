#include<bits/stdc++.h>
using namespace std;
int d=1;
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
		string ten,lop,ns,ma;
		double gpa;
	public:
		friend istream &operator>>(istream &in,SinhVien &a){
			a.ma="B20DCCN0";
			if (d<10) a.ma=a.ma+"0";
			a.ma=a.ma+to_string(d);
			d++;
			cin>>ws;
			getline(in,a.ten);
			a.ten=chuanhoa(a.ten);
			in>>a.lop>>a.ns>>a.gpa;
			if (a.ns[1]=='/') a.ns.insert(0,"0");
			if (a.ns[4]=='/') a.ns.insert(3,"0");
			return in;
		}
		friend ostream &operator<<(ostream &out,SinhVien a){
			out<<a.ma<<" "<<a.ten<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
			return out;
		}
		double laygpa(){
			return gpa;
		}
};
bool dk(SinhVien a,SinhVien b){
	return (a.laygpa()>b.laygpa());
}
void sapxep(SinhVien a[],int n){
	sort(a,a+n,dk);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds,N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

