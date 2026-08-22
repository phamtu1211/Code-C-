#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,j,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		i=n-2;
		while(i>=0&&a[i]<a[i+1]){
			i--;
		}
		if (i<0){
			reverse(a,a+n);
		}
		else{
			int j=n-1;
			while(a[j]>a[i]){
				j--;
			}
			swap(a[i],a[j]);
			reverse(a+i+1,a+n);
		}
		for(i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	    return 0;
}
