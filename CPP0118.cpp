#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,d=1,dem=1;
		for(i=2;i*i<=n;i++){
			int kt=0;
			while(n%i==0){
				d++;
				kt=1;
				n=n/i;
			}
			if (kt==1) dem++;
		}
		if (d==dem&&d==3) cout<<"1\n";
		else
		cout<<"0\n";
	}
}
