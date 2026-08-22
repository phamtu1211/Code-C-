#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m],i,j;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int b[n*m];
		int d=0,h1=0,c1=0,h2=n-1,c2=m-1;
		while(d<n*m){
			for(j=c1;j<=c2;j++){
				b[d]=a[h1][j];
				d++;
			}
			h1++;
			for(i=h1;i<=h2;i++){
				b[d]=a[i][c2];
				d++;
			}
			c2--;
			for(j=c2;j>=c1;j--){
				b[d]=a[h2][j];
				d++;
			}
			h2--;
			for(i=h2;i>=h1;i--){
				b[d]=a[i][c1];
				d++;
			}
			c1++;
		}
		for(i=0;i<n*m;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
