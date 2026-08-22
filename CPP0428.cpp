#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int i,j,a[n];
		vector<long long> c;
		long long b[m];
		for(i=0;i<n;i++){
			cin>>a[i];
			c.push_back(a[i]);
		}
		for(j=0;j<m;j++){
			cin>>b[j];
			c.push_back(b[j]);
		}
		sort(c.begin(),c.end());
		for(i=0;i<c.size();i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
}
