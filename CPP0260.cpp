#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,j,a[n][n],b[n*n],d=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
			b[d]=a[i][j];
			d++;
		}
	}
	sort(b,b+d);
	int d1=0,c1=0,c2=n-1,h1=0,h2=n-1;
	while(c1<=c2&&h1<=h2){
		for(j=c1;j<=c2;j++){
			a[h1][j]=b[d1];
			d1++;
		}
		h1++;
		for(i=h1;i<=h2;i++){
			a[i][c2]=b[d1];
			d1++;
		}
		c2--;
		for(j=c2;j>=c1;j--){
			a[h2][j]=b[d1];
			d1++;
		}
		h2--;
		for(i=h2;i>=h1;i--){
			a[i][c1]=b[d1];
			d1++;
		}
		c1++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
