#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string tu;
	int i;
	for(i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	stringstream ss(s);
	vector<string> v;
	while(ss>>tu){
		v.push_back(tu);
	}
	string email=v[v.size()-1];
	for(i=0;i<v.size()-1;i++){
		email+=v[i][0];
	}
	email+="@ptit.edu.vn";
	cout<<email;
}
