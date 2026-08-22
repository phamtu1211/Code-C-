#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten,gt,ns,dc,mst,nkhd;
};
void nhap(NhanVien &n){
	getline(cin,n.ten);
	cin>>n.gt>>n.ns;
	cin.ignore();
	getline(cin,n.dc);
	cin>>n.mst>>n.nkhd;
}
void in(NhanVien &n){
	cout<<"00001"<<" "<<n.ten<<" "<<n.gt<<" "<<n.ns<<" "<<n.dc<<" "<<n.mst<<" "<<n.nkhd;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
