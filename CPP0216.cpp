#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int l,r;
		cin>>l>>r;
		int c=(l+r)/2,kt=1;
		for(i=l;i<c;i++){
			if (a[i]>a[i+1]) kt=0;
		}
		for(i=c+1;i<r;i++){
			if (a[i]<=a[i+1]) kt=0;
		}
		if (kt==1) cout<<"Yes\n";
		else
		cout<<"No\n";
	}
}
