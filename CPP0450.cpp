#include<bits/stdc++.h>
using namespace std;
int kt(int a,int b[],int d){
	int i;
	for(i=0;i<d;i++){
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
		int a[n],i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int b[n],d=0,ktra=1;
		for(i=0;i<n;i++){
			if (kt(a[i],b,d)==-1){
				b[d]=a[i];
				d++;
			}
			else{
				cout<<a[i]<<endl;
				ktra=0;
				break;
			}
		}
		if (ktra==1) cout<<"-1\n";
	}
}
