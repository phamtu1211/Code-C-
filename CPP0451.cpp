#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int k,x;
		cin>>k>>x;
		int t=lower_bound(a,a+n,x)-a;
		if (a[t]==x){
			for(i=t-k/2;i<t;i++){
				if (i>=0) cout<<a[i]<<" ";
				else
				cout<<"0 ";
			}
			for(i=t+1;i<t+1+k/2;i++){
				if (i>=0) cout<<a[i]<<" ";
				else
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}
