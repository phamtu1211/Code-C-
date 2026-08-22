#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n],i,j;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if (i>0&&i<n-1&&j>0&&j<n-1){
					cout<<"  ";
				}
				else
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
