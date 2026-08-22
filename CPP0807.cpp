#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream f1;
	f1.open("DATA.in");
	int n,m;
	f1>>n>>m;
	int a[n],b[m];
	set<int> c,d;
	for(int i=0;i<n;i++){
		f1>>a[i];
		c.insert(a[i]);
	}
	for(int j=0;j<m;j++){
		f1>>b[j];
		if (c.find(b[j])!=c.end()) d.insert(b[j]);
	}
	for(auto x:d){
		cout<<x<<" ";
	}
	f1.close();
}
