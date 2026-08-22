#include<bits/stdc++.h>
using namespace std;
class Employee{
	private:
	string ma,ten;
	float hs;
	int lcb,pc;
	public:
	void nhap(){
		cin>>ma;
		cin>>ws;
		getline(cin,ten);
		cin>>hs>>lcb>>pc;	
	}
	void tong(){
		cout<<lcb*hs+pc<<endl;
	}
	string layma(){
		return ma+"hello";
	}
	void datma(string ma1){
		if (ma1!="") ma=ma1;
	}
	Employee(string ma,string ten,float hs,int lcb,int pc){
		this->ma=ma;
		this->ten=ten;
		this->hs=hs;
		this->lcb=lcb;
		this->pc=pc;
	}
};
int main(){
	Employee e("B123","Nguyen Van a",3.4,5000,500);
//	e.nhap();
	e.tong();
	cout<<e.layma();
	e.datma("");
	}
