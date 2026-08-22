#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		set<string> a,b;
		string s1;
		cin>>ws;
		getline(cin,s1);
		string s2;
		getline(cin,s2);
		stringstream ss(s1),ss1(s2);
		string tu;
		while(ss>>tu){
			a.insert(tu);
		}
		while(ss1>>tu){
			b.insert(tu);
		}
		for(auto x:a){
			if (b.find(x)==b.end()){
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}
}
