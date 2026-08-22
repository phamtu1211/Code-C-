#include<bits/stdc++.h>
using namespace std;
int nto(long long n){
	if (n<2) return 0;
	for(long long i=2;i*i<=n;i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int b,p;
		cin>>b>>p;
		long long d=1,i=1,k=p;
		long long lon=b*b;
		if (p==1) cout<<"0\n";
		else{
		while(k+1<=lon){
			long long a=sqrt(k+1);
			if (a*a==k+1){
				d++;
			}
			i++;
			k=p*i;
		}
		cout<<d<<endl;
	}
	}
}
