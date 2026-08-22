#include<iostream>
int kt(int n){
	int a;
	while(n>0){
		a=n%10;
		if (a!=0&&a!=6&&a!=8){
			return 0;
		}
		n=n/10;
	} 
	return 1;
}
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if (kt(n)==1) cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
