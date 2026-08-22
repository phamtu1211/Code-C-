#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int i,a[1005];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(i=n-1;i>n-1-k;i--){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
