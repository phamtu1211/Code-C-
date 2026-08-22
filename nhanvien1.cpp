#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	char ma[20],ten[50];
	float hs;
	int lcb,pc;
};
void nhap(){
	int n;
	cin>>n;
	ofstream f;
	f.open("NhanVien.txt",ios::binary);
	while(n--){
	NhanVien e;
	cin>>e.ma;
	cin>>ws;
	gets(e.ten);
	cin>>e.hs>>e.lcb>>e.pc;
	//f<<e.ma<<"\n"<<e.ten<<"\n"<<e.hs<<"\n"<<e.lcb<<"\n"<<e.pc;
	f.write(reinterpret_cast<char*>(&e),sizeof(NhanVien));
	}
	f.close();
}
void doc(){
	ifstream f;
	f.open("NhanVien.txt",ios::binary);
	NhanVien e;
//	while(f>>e.ma){
//	f.ignore();
//	getline(f,e.ten);
//	f>>e.hs>>e.lcb>>e.pc;
//	cout<<e.lcb*e.hs+e.pc<<endl;
//	}
	while(f.read(reinterpret_cast<char*>(&e),sizeof(NhanVien))){
		cout<<e.lcb*e.hs+e.pc<<endl;
	}
	f.close();
}
int main(){
	NhanVien a;
	doc();
}
