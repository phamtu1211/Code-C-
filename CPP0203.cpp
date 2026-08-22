#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,a[n],j;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int d=1;
		for(i=0;i<n;i++){
			if (a[i]==d) d++;
		}
		cout<<d<<endl;
	}
	return 0;
}
