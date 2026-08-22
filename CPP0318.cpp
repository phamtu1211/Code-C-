#include<bits/stdc++.h>
using namespace std;
int td(string s){
	if (s[5]>=s[6]) return 0;
	if (s[6]>=s[7]) return 0;
	if (s[7]>=s[9]) return 0;
	if (s[9]>=s[10]) return 0;
	return 1;
}
int bh(string s){
	if (s[5]==s[6]&&s[5]==s[7]&&s[5]==s[9]&&s[5]==s[10]) return 1;
	if (s[5]==s[6]&&s[5]==s[7]&&s[9]==s[10]) return 1;
	return 0;
}
int lp(string s){
	if (s[5]!='6'&&s[5]!='8') return 0;
	if (s[6]!='6'&&s[6]!='8') return 0;
	if (s[7]!='6'&&s[7]!='8') return 0;
	if (s[9]!='6'&&s[9]!='8') return 0;
	if (s[10]!='6'&&s[10]!='8') return 0;
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if (td(s)||bh(s)||lp(s)) cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
