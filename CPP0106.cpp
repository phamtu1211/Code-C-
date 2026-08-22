#include<iostream>
using namespace std;
//int kt(long long  n){
//	long long b=n,t=0;
//	int a;
//	while(n>0){
//		a=n%10;
//		t=t*10+a;
//		n=n/10;
//	}
//	if (t!=b) return 0;
//	return 1;
//}
int main(){
	int t;
	cin>>t;
	while(t--){
//		long long n;
//		cin>>n;
//		if (kt(n)==1) cout<<"YES\n";
//		else
//		cout<<"NO\n";
	string n;
	cin>>n;
	int i,kt=1;
	for(i=0;i<=n.size()/2;i++){
		if (n[i]!=n[n.size()-1-i]){
			kt=0;
			break;
		}
	}
	if (kt==1) cout<<"YES\n";
	else
	cout<<"NO\n";
	}
}
