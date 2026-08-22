#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x;
		int y;
		long long p;
		cin>>x>>y>>p;
		long long t=1;
		for(int i=1;i<=y;i++){
			t=(t*x)%p;
		}
		cout<<t<<endl;
	}
}
