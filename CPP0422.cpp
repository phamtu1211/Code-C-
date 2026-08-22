#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,d=0;
		long long a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			if (a[i]==0) d++;
		}
		for(i=0;i<n;i++){
			if (a[i]!=0) cout<<a[i]<<" ";
		}
		for(i=0;i<d;i++){
			cout<<"0 ";
		}
		cout<<endl;
	}
}
