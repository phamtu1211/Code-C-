#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,j,a[n][3];
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	int d=0;
	for(i=0;i<n;i++){
		int d0=0,d1=0;
		for(j=0;j<3;j++){
			if (a[i][j]==1) d1++;
			else
			d0++;
		}
		if (d1>d0) d++;
	}
	cout<<d;
}
