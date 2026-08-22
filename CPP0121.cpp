#include<iostream>
using namespace std;
long long uc(long long a,long long b){
	if (b==0) return a;
	return (uc(b,a%b));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long c=a*b/uc(a,b);
		long long d=uc(a,b);
		cout<<c<<" "<<d<<endl;
	}
}
