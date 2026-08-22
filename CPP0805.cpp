#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream f1,f2;
	f1.open("DATA1.in");
	f2.open("DATA2.in");
	set<string>a,b,c;
	string s;
	while(f1>>s){
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		a.insert(s);
		c.insert(s);
	}
	while(f2>>s){
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		if (c.find(s)!=c.end()) b.insert(s);
		a.insert(s);
	}
	for(auto x:a){
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x:b){
		cout<<x<<" ";
	}
	f1.close();
	f2.close();
}
