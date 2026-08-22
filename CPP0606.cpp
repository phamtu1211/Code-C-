#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string ma,ten,gt,ns,dc,mst,nk;
	public:
		friend istream &operator>>(istream &in,NhanVien &a){
			in>>ws;
			a.ma="00001";
			getline(in,a.ten);
			in>>a.gt>>a.ns;
			cin>>ws;
			getline(in,a.dc);
			in>>a.mst>>a.nk;
			return in;
		}
		friend ostream &operator>>(ostream &out,NhanVien a){
			out<<a.ma<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.nk;
			return out;
		}
};
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}
