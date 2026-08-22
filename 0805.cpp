#include<bits/stdc++.h>
using namespace std;
int main(){
	set<string> a,b,c,d;
	ifstream f1,f2;
	f1.open("DATA1.in");
	f2.open("DATA2.out");
	string tu;
	while(f1>>tu){
		for(int i=0;i<tu.size();i++){
			tu[i]=tolower(tu[i]);
		}
		b.insert(tu);
		a.insert(tu);
	}
	while(f2>>tu){
		for(int i=0;i<tu.size();i++){
			tu[i]=tolower(tu[i]);
		}
		if (b.find(tu)!=b.end()) c.insert(tu);
		a.insert(tu);
	}
	for(auto x:a){
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x:c){
		cout<<x<<" ";
	}
	f1.close();
	f2.close();
}
