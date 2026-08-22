#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,p;
	cin>>n>>m>>p;
	int i,j,k,a[n][m],b[m][p];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(j=0;j<m;j++){
		for(k=0;k<p;k++){
			cin>>b[j][k];
		}
	}
	int c[n][p];
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			int t=0;
			for(k=0;k<m;k++){
				t=t+a[i][k]*b[k][j];
			}
			c[i][j]=t;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
