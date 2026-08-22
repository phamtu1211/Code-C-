#include<bits/stdc++.h>
using namespace std;
long long p=1000000000+7;
long long power(long long a,long long b){
	long long t=1;
	while(b>0){
		if (b%2==1) t=t*a%p;
		a=a*a%p;
		b=b/2;
	}
	return t;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,r;
		cin>>n>>r;
		long long t=1;
		int j=2;
		if (n<r){
		cout<<endl;	
		}
		else{
		long long t1=1,t2=1,t3=1;
		for(int i=2;i<=n;i++){
			t1=(t1*i)%p;
		}
		for(int i=2;i<=r;i++){
			t2=(t2*i)%p;
		}
		for(int i=2;i<=n-r;i++){
			t3=(t3*i)%p;
		}
		long long t=(t2*t3)%p;
		long long kq=t1*power(t,p-2)%p;
		cout<<kq<<endl;
		}
	}
}
