#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,a[n];
		set<int> c;
		for(i=0;i<n-1;i++){
			cin>>a[i];
			c.insert(a[i]);
		}
		for(i=1;i<=n;i++){
			if (c.count(i)==0) cout<<i<<endl;
		}
	}
}
