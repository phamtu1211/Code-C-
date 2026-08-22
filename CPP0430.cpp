#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,a[n];
		vector<int> c;
		for(i=0;i<n;i++){
			cin>>a[i];
			c.push_back(a[i]);
		}
		sort(c.begin(),c.end());
		int t=0;
		for(i=0;i<c.size()-1;i++){
			if (c[i+1]-c[i]>1) t=t+c[i+1]-c[i]-1;
		}
		cout<<t<<endl;
	}
}
