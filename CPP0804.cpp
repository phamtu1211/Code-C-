#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream f1;
	string n;
	f1.open("VANBAN.in");
	set<string> a;
	while(f1>>n){
		for(int i=0;i<n.size();i++){
			n[i]=tolower(n[i]);
		}
		a.insert(n);
	}
	for(auto x:a){
		cout<<x<<endl;
	}
	f1.close();
}
