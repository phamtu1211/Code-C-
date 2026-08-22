#include<bits/stdc++.h>
using namespace std;
int nto(int n){
	if (n<2) return 0;
	for(int i=2;i*i<=n;i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int tcs(int n){
	int t=0;
	while(n>0){
		int b=n%10;
		t=t+b;
		n=n/10;
	}
	return t;
}
int tu(int n){
	int t=0,b;
	for(int i=2;i*i<=n;i++){
		while(n%i==0){
			b=tcs(i);
			t=t+b;
			n=n/i;
		}
	}
	if (n>1) {
		b=tcs(n);
		t=t+b;
	}
	return t;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if (nto(n)==0){
			if (tcs(n)==tu(n)){
				cout<<"YES\n";
			}
			else
			cout<<"NO\n";
		}
		else
		cout<<"NO\n";
	}
}
