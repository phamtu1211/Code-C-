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
		int min=1000000;
		for(i=0;i<n-1;i++){
			if (a[i+1]-a[i]<min) min=a[i+1]-a[i];
		}
		cout<<min<<endl;
	}
}
