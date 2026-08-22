#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n],i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int d=0;
		for(i=0;i<n;i++){
			if (a[i]==x) d++;
		}
		if (d>0){
			cout<<d<<endl;
		}
		else
		cout<<"-1\n";
	}
}
