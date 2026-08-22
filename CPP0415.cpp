#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],i,j,max=0;
		long long b[m],min=1000000000000000000;
		for(i=0;i<n;i++){
			cin>>a[i];
			if (a[i]>max) max=a[i];
		}
		for(j=0;j<m;j++){
			cin>>b[j];
			if (b[j]<min) min=b[j];
		}
		long long t=min*max;
		cout<<t<<endl;
	}
}
