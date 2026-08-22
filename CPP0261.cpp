#include<bits/stdc++.h>
int uc(int a,int b){
	if (b==0) return a;
	return uc(b,a%b);
}
using namespace std;
int main(){
	int n,m;
	int i,j;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cin>>m;
	int b[m][m];
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			cin>>b[i][j];
		}
	}
	int c=uc(n,m);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=a[i][j]*b[i%c][j%c];
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
