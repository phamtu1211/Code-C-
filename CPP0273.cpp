#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,t=0;
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			t=t+a[i];	
		}
		int kt=1,s=a[0];
		for(i=1;i<n-1;i++){
			if (s==t-s-a[i]){
				cout<<i+1<<endl;
				kt=0;
				break;
			}
			s=s+a[i];
		}
		if (kt==1) cout<<"-1\n";
	}
}
