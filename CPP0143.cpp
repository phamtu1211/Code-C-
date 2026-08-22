#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		if (n==1||n==2) cout<<"1"<<endl;
		else{
		long long f1=1;
		long long f2=1,f3;
		for(i=3;i<=n;i++){
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
		cout<<f3<<endl;
		}
	}
}
