#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int i,a[n];
		vector<int> c;
		for(i=0;i<n;i++){
			cin>>a[i];
			c.push_back(a[i]);
		}
		int d=0;
		for(i=0;i<c.size();i++){
			if (c[i]==x){
				cout<<i+1<<endl;
				d++;
				break;
			}
		}
		if (d==0) cout<<"-1\n";
	}
}
