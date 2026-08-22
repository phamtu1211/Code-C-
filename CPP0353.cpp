#include<bits/stdc++.h>
using namespace std;
int kt(string s){
	for(int i=0;i<s.size()/2;i++){
		if (s[i]!=s[s.size()-1-i]) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int t=0;
		for(int i=0;i<s.size();i++){
			s[i]=toupper(s[i]);
			if (s[i]>='A'&&s[i]<='C'){
				s[i]='2';
			}
			if(s[i]>='D'&&s[i]<='F'){
				s[i]='3';
			}
			if(s[i]>='G'&&s[i]<='I'){
				s[i]='4';
			}
			if(s[i]>='J'&&s[i]<='L'){
				s[i]='5';
			}
			if(s[i]>='M'&&s[i]<='O'){
				s[i]='6';
			}
			if(s[i]>='P'&&s[i]<='S'){
				s[i]='7';
			}
			if(s[i]>='T'&&s[i]<='V'){
				s[i]='8';
			}
			if(s[i]>='W'&&s[i]<='Z'){
				s[i]='9';
			}
		}
		if (kt(s)) cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
