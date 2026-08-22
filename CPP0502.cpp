#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string ten,ns;
	double d1,d2,d3,td;
};
void nhap(ThiSinh &t){
	getline(cin,t.ten);
	cin>>t.ns;
	cin>>t.d1>>t.d2>>t.d3;
	t.td=t.d1+t.d2+t.d3;
}
void in(ThiSinh &t){
	cout<<t.ten<<" "<<t.ns<<" "<<fixed<<setprecision(1)<<t.td;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
