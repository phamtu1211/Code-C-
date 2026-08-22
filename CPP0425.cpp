#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int b[n],d=0;
		for(i=0;i<n;i=i+2){
			b[i]=a[d];
			d++;
		}
		for(i=1;i<n;i=i+2){
			b[i]=a[d];
			d++;
		}
		for(auto x:b){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
