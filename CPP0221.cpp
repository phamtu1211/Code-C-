#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int i,j,a[n][m];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int c1=0,h1=0,c2=m-1,h2=n-1;
		while(c1<c2&&h1<h2){
			int b=a[c1+1][h1];
			for(j=c1;j<=c2;j++){
				swap(a[h1][j],b);
			}
			h1++;
			for(i=h1;i<=h2;i++){
				swap(a[i][c2],b);
			}
			c2--;
			for(j=c2;j>=c1;j--){
				swap(a[h2][j],b);
			}
			h2--;
			for(i=h2;i>=h1;i--){
				swap(a[i][c1],b);
			}
			c1++;
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
