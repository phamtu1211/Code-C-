#include<bits/stdc++.h>
using namespace std;
int kt(int a,long long b[],int n){
	int i;
	for(i=0;i<n;i++){
		if (a==b[i]) return i; 
	}	
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i;
		long long a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int j,b[n],d=0;
		for(i=0;i<n;i++){
			int t=kt(d,a,n);
			if (t!=-1){
				b[d]=a[t];
				cout<<b[d]<<" ";
				d++;
			}
			else{
				b[d]=-1;
				cout<<b[d]<<" ";
				d++;
			}
		}
		cout<<endl;
		
	}
}
