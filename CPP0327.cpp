#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		int a=n.size();
		int d=0,i;
		for(i=0;i<a;i++){
			int t=n[i]-'0';
			d=(d*2+t)%5;
		}
		if (d==0) cout<<"Yes\n";
		else
		cout<<"No\n";
	}
}
