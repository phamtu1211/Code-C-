#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long m;
		long long n;
		cin>>n>>m;
		long long i,j,a[n][m];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		long long d=0,h1,c1,h2,c2,k,l;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if (a[i][j]==1){
					int kt=1;
					h1=i-1,c1=j-1,h2=i+1,c2=j+1;
					if (i-1<0) h1=0;
					if (j-1<0) c1=0;
					if (i+1>n-1) h2=n-1;
					if (j+1>m-1) c2=m-1; 
					for(k=h1;k<=h2;k++){
						for(l=c1;l<=c2;l++){
							if (k==i&&l==j) continue;
							if (a[k][l]==1)	kt=0;
							}
						}
					if (kt==1) d++;
					a[i][j]=0;
				}
			}
		}
		cout<<d<<endl;
	}
}
