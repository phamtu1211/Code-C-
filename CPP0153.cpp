#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		long long k;
		double t=0;
		cin>>n>>k;
		for(i=1;i<=n;i++){
			t=(double)t+i%k;
		}
//		if (t==k) cout<<"1"<<endl;
//		else
//		cout<<"0"<<endl;
		cout<<t<<endl;
	}
}
