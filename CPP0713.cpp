#include<bits/stdc++.h>
using namespace std;
int n;
vector<bool> kt(100,true);
int x[100];
void try1(int i){
	for(int j=1;j<=n;j++){
		if (kt[j]){
		x[i]=j;
		kt[j]=false;
		if (i==n){
			for(int l=1;l<=n;l++) cout<<x[l];
			cout<<" ";
		}
		else
		try1(i+1);
		kt[j]=true;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		try1(1);
		cout<<endl;
	}
}
