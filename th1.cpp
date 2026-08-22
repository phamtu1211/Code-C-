#include<bits/stdc++.h>
using namespace std;
long long uc(long long a,long long b){
	if (b==0) return a;
	return (uc(b,a%b));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		long long i;
		long long uc1=uc(y,z);
		long long bc1=y*z/uc1;
		long long uc3s=uc(bc1,x);
		long long bc=x*bc1/uc3s;
		long long a=pow(10,n-1);
		if (bc<a){
			long long b=a/bc;
			if (a%bc==0&&bc*b<=a*10-1) cout<<bc*b;
			else
			if (a%bc!=0&&bc*(b+1)<=a*10-1) cout<<bc*(b+1);
			else
			cout<<"-1";
		}
		else{
			if (bc<=a*10-1) cout<<bc;
			else
			cout<<"-1";
		}
		cout<<endl;
	}
	return 0;
}
