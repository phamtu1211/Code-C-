#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int i,j,a[n][m],b[n][m],k,l;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>a[i][j];
				b[i][j]=0;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if (a[i][j]==1){
					for(k=0;k<n;k++){
						b[k][j]=1;
					}
					for(l=0;l<m;l++){
						b[i][l]=1;
					}
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
