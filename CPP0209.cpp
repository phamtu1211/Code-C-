#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int i,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		while(q--){
			int l,r,t=0;
			cin>>l>>r;
			for(i=l-1;i<r;i++){
				t=t+a[i];
			}
			cout<<t<<endl;
		}
	}
}
