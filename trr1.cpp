#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	string s;
	for(int i=1;i<=n-k+1;i++){
		for(int cs=1;cs<=n;cs++){
			s[cs]='0';
		}
		for(int j=n-i+1;j>=(n-i-k+2);j--){
			s[j]='1';
		}
		for(int cs=1;cs<=n;cs++){
			cout<<s[cs];
		}
		if (i!=n-k+1)cout<<endl;
	}
}
