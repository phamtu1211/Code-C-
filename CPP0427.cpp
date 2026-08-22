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
		int d=0;
		for(i=0;i<=n-1;i++){
			if (a[i]==0){
				d++;
				continue;
			}
			if (a[i]==a[i+1]){
				a[i]=a[i]*2;
				a[i+1]=0;
			}
		}
		for(i=0;i<n;i++){
			if (a[i]!=0) cout<<a[i]<<" ";
		}
		for(i=0;i<d;i++){
			cout<<"0"<<" ";
		}
		cout<<endl;
	}
}
