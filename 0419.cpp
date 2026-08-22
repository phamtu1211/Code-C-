#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int x;
		vector<int>a,b;
		set<int> c,d;
		for(int i=0;i<n;i++){
			cin>>x;
			a.push_back(x);
			c.insert(x);
		}
		for(int j=0;j<m;j++){
			cin>>x;
			b.push_back(x);
			c.insert(x);
		}
		for(auto l:c){
			cout<<l<<" ";
		}
		cout<<endl;
		for(auto l:a){
			auto it=find(b.begin(),b.end(),l);
			if (it!=b.end()){
				d.insert(l);
			}
		}
		for(auto l:d){
			cout<<l<<" ";
		}
		cout<<endl;
	}
}
