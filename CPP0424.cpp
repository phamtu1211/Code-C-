#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int i,j,a[n][m];
		vector<int> c;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>a[i][j];
				c.push_back(a[i][j]);
			}
		}
		sort(c.begin(),c.end());
		for(i=0;i<c.size();i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
}
