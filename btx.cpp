#include<bits/stdc++.h>
using namespace std;
string tiep(string s){
	for(int i=s.size()-1;i>=0;i--){
		if (s[i]=='0'){
			s[i]='1';
			return s;
		}
		else{
			s[i]='0';
		}
	}
	return "";
}
int main(){
	int n;
	cin>>n;
	string s="";
	for(int i=0;i<n;i++){
		s=s+"0";
	}
	for(int i=0;i<pow(2,n);i++){
		cout<<s<<" ";
		s=tiep(s);
	}
}
