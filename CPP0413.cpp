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
		sort(a,a+n);
		if (n%2==0){
		for(i=n-1;i>=n/2;i--){
			cout<<a[i]<<" "<<a[n-1-i]<<" ";
		}
		}
		else{
			for(i=n-1;i>=n/2;i--){
				cout<<a[i]<<" ";
				if (i!=n/2) cout<<a[n-1-i]<<" ";
			}
		}
		cout<<endl;
	}
}
