#include<bits/stdc++.h>
using namespace std;
int tn(string s){
	int a=s.size(),i;
	for(i=0;i<a;i++){
		int b=s[i]-'0';
		if (s[i]!=s[a-1-i]||b%2!=0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if (tn(s)==1) cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
