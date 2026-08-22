#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if (n==0||n==1){
			cout<<"YES\n";
		}
		else{
		long long f1=1,f2=1,f3=f2+f1;	
		while(f3<n){
		f3=f2+f1;
		f2=f3;
		f1=f2;
		}
		if (f3==n) cout<<"YES\n";
		else
		cout<<"NO\n";
		}
	}
}
