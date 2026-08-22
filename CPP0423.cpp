#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int i,a[n],d=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			if (a[i]<=k) d++;
		}
		int count=0;
		for(i=0;i<d;i++){
			if(a[i]<=k) count++;
		}
		int maxx=count;
		for(i=d;i<n;i++){
			if (a[i-d]<=k) count--;
			if (a[i]<=k) count++;
			if (count>maxx) maxx=count;
		}
		cout<<d-maxx<<endl;
	}
}
