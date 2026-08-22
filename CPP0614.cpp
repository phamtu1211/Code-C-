#include<bits/stdc++.h>
using namespace std;
int d=1;
class NhanVien{
	private:
		string ma,ten,gt,dc,mst,nk;
		int n,t,nam;
		char c;
	public:
		friend istream &operator>>(istream &in,NhanVien &a){
			a.ma="000";
			if (d<10) a.ma=a.ma+"0";
			a.ma=a.ma+to_string(d);
			d++;
			in>>ws;
			getline(in,a.ten);
			in>>a.gt>>a.t>>a.c>>a.n>>a.c>>a.nam;
			in>>ws;
			getline(in,a.dc);
			in>>a.mst>>a.nk;
			return in;
		}
		friend ostream &operator<<(ostream &out,NhanVien a){
			out<<a.ma<<" "<<a.ten<<" "<<a.gt<<" ";
			if (a.t<10) out<<"0";
			out<<a.t<<a.c;
			if (a.n<10) out<<"0";
			out<<a.n<<a.c<<a.nam<<" "<<a.dc<<" "<<a.mst<<" "<<a.nk<<endl;
			return out;	
		}
		int layn(){
			return n;
		}
		int layt(){
			return t;
		}
		int laynam(){
			return nam;
		}
};
bool dk(NhanVien a,NhanVien b){
	if (a.laynam()==b.laynam()&&a.layt()==b.layt()) return a.layn()<b.layn();
	if (a.laynam()==b.laynam()) return a.layt()<b.layt();
	return a.laynam()<b.laynam();
	}
void sapxep(NhanVien a[],int n){
	sort(a,a+n,dk);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
