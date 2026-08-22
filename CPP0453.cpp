#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int i,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if (k<n)cout<<a[k-1]<<endl;
	}
}
