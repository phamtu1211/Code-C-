#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n],i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int j,d=0;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if (a[i]+a[j]==k) d++;
			}
		}
		cout<<d<<endl;
	}
}
