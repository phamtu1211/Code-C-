#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,a[n],j;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long t=0;
	for(i=0;i<n;i++){
		t=t+1LL*a[i]*(2LL*(i+1)-n-1);
	}
	cout<<t;
}
