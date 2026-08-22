#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int i,a[n],j;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long d=0;
		 j=0;
		for(i=0;i<n;i++){
			while(j<n&&a[j]-a[i]<k){
				j++;
			}
			d=d+j-i-1;
		}
		cout<<d<<endl;
	}
}
