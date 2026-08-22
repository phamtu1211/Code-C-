#include<bits/stdc++.h>
int nto(long long a){
	if (a<2) return 0;
	long long i;
	for(i=2;i<=sqrt(a);i++){
		if (a%i==0) return 0;
	}
	return 1;
}
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		int i;
		cin>>n;
		for(i=2;i<=sqrt(n);i++){
			while(n%i==0){
				n=n/i;
				cout<<i<<" ";
			}
		}
		if (n>1) cout<<n;
		cout<<endl;
	}
	return 0;
}
