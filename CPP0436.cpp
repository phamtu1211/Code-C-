#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		set<int> b;
		for(int i=0;i<n;i++){
			cin>>a[i];
			b.insert(a[i]);
		}
		for(int i=0;i<n;i++){
			auto x=b.upper_bound(a[i]);
			if (x==b.end()) cout<<"_ ";
			else
			cout<<*x<<" ";
		}
		cout<<endl;
	}
}
