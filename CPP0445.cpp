#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		set<int > c;
		int a[n];
		int i;
		for(i=0;i<n;i++){
			cin>>a[i];
			c.insert(a[i]);
		}
		if (c.size()<=1)cout<<"-1\n";
		else{
			set<int>::iterator it=c.begin();
			cout<<*it<<" ";
			it++;
			cout<<*it;
		}
			cout<<endl;
	}
}
