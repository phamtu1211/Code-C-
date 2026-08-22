#include<bits/stdc++.h>
using namespace std;
int kt(long long a){
	if (a<0) return 0;
	long long x=sqrt(a);
	if (x*x==a) return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a=5*n*n+4;
		long long b=5*n*n-4;
		if (kt(a)||kt(b)) cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
