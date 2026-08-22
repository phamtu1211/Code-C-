#include<bits/stdc++.h>
using namespace std;
string np(string s){
	int i;
	for(i=s.size()-1;i>=0;i--){
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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i;
		string s="";
		for(i=0;i<n;i++){
			s=s+"0";
		}
		for(i=0;i<pow(2,n);i++){
			cout<<s<<" ";
			s=np(s);
		}
		cout<<endl;
	}
}
