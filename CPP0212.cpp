#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long x;
		cin>>n>>x;
		int i,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		long long tong=0;
		for(i=0;i<n;i++){
			tong=(tong*x+a[i])%1000000007;
		}
		cout<<tong<<endl;
	}
}
