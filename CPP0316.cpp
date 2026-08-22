#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int t=0;
		for(int i=0;i<s.size();i++){
			s[i]=s[i]-'0';
			t=t+s[i];
		}
		if (t%9==0&&t>0) cout<<"1\n";
		else
		cout<<"0\n";
	}
}
