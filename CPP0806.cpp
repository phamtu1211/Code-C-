#include<bits/stdc++.h>
using namespace std;
int d=1,d1=1;
class KH{
	public:
		string makh,tenkh,gt,ns,dc;
};
class MH{
	public:
		string mamh,tenmh,dv;
		int mua,ban;
};
KH kh[25];
MH mh[45];
class KhachHang{
	public:
		string makh,tenkh,gt,ns,dc;
		friend istream &operator>>(istream &in,KhachHang &a){
			a.makh="KH0";
			if (d<10) a.makh=a.makh+"0";
			a.makh=a.makh+to_string(d);
			in>>ws;
			getline(in,a.tenkh);
			in>>a.gt>>a.ns;
			in>>ws;
			getline(in,a.dc);
			kh[d-1].makh=a.makh;
			kh[d-1].tenkh=a.tenkh;
			kh[d-1].gt=a.gt;
			kh[d-1].ns=a.ns;
			kh[d-1].dc=a.dc;
			d++;
			return in;
		}
};
class MatHang{
	public:
	string mamh,tenmh,dv;
	int mua,ban;
	friend istream &operator>>(istream &in,MatHang &a){
		a.mamh="MH0";
		if (d1<10) a.mamh=a.mamh+"0";
		a.mamh=a.mamh+to_string(d1);
		in>>ws;
		getline(in,a.tenmh);
		in>>ws;
		getline(in,a.dv);
		in>>a.mua>>a.ban;
		mh[d1-1].mamh=a.mamh;
		mh[d1-1].tenmh=a.tenmh;
		mh[d1-1].dv=a.dv;
		mh[d1-1].mua=a.mua;
		mh[d1-1].ban=a.ban;
		d1++;
		return in;
	}
};
int d2=1;
class HoaDon{
	public:
	string ma1,ma2,mahd,tenmh1,dc1,tenkh1,dv1;
	long long loi;
	long long tong;
	int mua1,ban1;
	int sl;
	friend istream &operator>>(istream &in,HoaDon &a){
		a.mahd="HD";
		if (d2<10) a.mahd=a.mahd+"00";
		if (d2>=10&&d2<100) a.mahd=a.mahd+"0";
		a.mahd=a.mahd+to_string(d2);
		d2++;
		in>>a.ma1>>a.ma2>>a.sl;
		for(int i=0;i<d-1;i++){
			if (a.ma1==kh[i].makh){
				a.tenkh1=kh[i].tenkh;
				a.dc1=kh[i].dc;
				break;
			}
		}
		for(int i=0;i<d1-1;i++){
			if (a.ma2==mh[i].mamh){
				a.tenmh1=mh[i].tenmh;
				a.dv1=mh[i].dv;
				a.tong=a.sl*mh[i].ban;
				a.loi=(mh[i].ban-mh[i].mua)*a.sl;
				a.mua1=mh[i].mua;
				a.ban1=mh[i].ban;
				break;
			}
		}
		return in;
	}
	int layloi(){
		return loi;
	}
	friend ostream &operator<<(ostream &out,HoaDon a){
		out<<a.mahd<<" "<<a.tenkh1<<" "<<a.dc1<<" "<<a.tenmh1<<" "<<a.dv1<<" "<<a.mua1<<" "<<a.ban1<<" "<<a.sl<<" "<<a.tong<<endl;	
		return out;
	}
};
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    ifstream f1,f2,f3;
	f1.open("KH.in");
	f2.open("MH.in");
	f3.open("HD.in");
    int N,M,K,i;
    f1 >> N;
    for(i=0;i<N;i++) f1 >> dskh[i];
    f2 >> M;
    for(i=0;i<M;i++) f2 >> dsmh[i];
    f3 >> K;
    for(i=0;i<K;i++) f3 >> dshd[i];
	

    for(i=0;i<K;i++) cout << dshd[i];
    f1.close();
    f2.close();
    f3.close();
    return 0;
}
