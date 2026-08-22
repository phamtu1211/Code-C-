#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,j;
		int n;
		cin>>n;
		int a[n][n];
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		int k,d=0,h;
		for(k=0;k<n;k++){
			int kt1=0;
			for(h=k+1;h<n;h++){
				if (a[0][k]==a[0][h]) kt1=1;
			}
			if (kt1==0){
			int dem=1;
			for(i=1;i<n;i++){
				int kt=0;
				for(j=0;j<n;j++){
					if (a[0][k]==a[i][j]) {
						kt=1;
						break;
					}
				}
				if (kt==1) dem++;
			}
			if (dem==n) d++;
		}
		}
		cout<<d<<endl;
	}
}
