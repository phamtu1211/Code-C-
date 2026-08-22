#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int i,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int j=1,kt=1;
		for(i=0;i<n-1;i++){
			while(a[j]-a[i]<x&&j<n){
				j++;
			}
			if (a[j]-a[i]==x){
				cout<<"1\n";
				kt=0;
				break;
			}
		}
		if (kt==1) cout<<"-1\n";
	}
}
