#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		int a[256]={0};
		for(int i=0;i<n.size();i++){
			a[n[i]]++;
		}
		int kt=1;
		for(int i=0;i<n.size();i++){
			if (n.size()%2==0){
				if (a[n[i]]>(n.size()/2)) kt=0;
			}
			else{
				if (a[n[i]]>(n.size()/2+1)) kt=0;
			}
		}
		if (kt==1) cout<<"1\n";
		else
		cout<<"0\n";
	}
}
