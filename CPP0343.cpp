#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>ws;
		getline(cin,s);
		stringstream ss(s);
		int n,d=0,d1=0,d2=0;
		while(ss>>n){
			if (n%2==0) d1++;
			else
			d2++;
			d++;
		}
		if ((d%2==0&&d1>d2)||(d%2!=0&&d2>d1)) cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
