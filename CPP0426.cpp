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
		for(i=n-1;i>=n/2;i--){
			if (i!=n-1-i){
				cout<<a[i]<<" "<<a[n-1-i]<<" ";
			}
			else{
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}
