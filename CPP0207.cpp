#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		int i,a[n],j;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=d;i<n;i++){
			cout<<a[i]<<" ";
		}
		for(i=0;i<d;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
