#include<bits/stdc++.h>
using namespace std;
string nho(string a){
	for(int i=0;i<a.size();i++){
		if (a[i]=='6') a[i]='5';
	}
	return a;
}
string lon(string a){
	for(int i=0;i<a.size();i++){
		if (a[i]=='5') a[i]='6';
	}
	return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string x1,x2;
		cin>>x1>>x2;
		long long a=stoll(nho(x1));
		long long b=stoll(nho(x2));
		long long c=stoll(lon(x1));
		long long d=stoll(lon(x2));
		cout<<a+b<<" "<<c+d<<endl;
	}
}
