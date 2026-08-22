#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten,gt,ns,dc,mst,nkhd;
};
void nhap(NhanVien &nv){
	cin.ignore();
	getline(cin,nv.ten);
	cin>>nv.gt>>nv.ns;
	cin.ignore();
	getline(cin,nv.dc);
	cin>>nv.mst>>nv.nkhd;
}
void inds(NhanVien nv[],int N){
	int i;
	for(i=0;i<N;i++){
		if (i>=0&&i<=8) cout<<"0000";
		if (i>=9&&i<=98) cout<<"000";
		cout<<i+1<<" "<<nv[i].ten<<" "<<nv[i].gt<<" "<<nv[i].ns<<" "<<nv[i].dc<<" "<<nv[i].mst<<" "<<nv[i].nkhd<<endl;
		}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
