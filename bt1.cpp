#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s),ss1(s);
	string tu;
	string a[1000];
	map<string,int> d;
	while(ss>>tu){
		d[tu]++;
	}
	for(auto i:d){
		cout<<i.first<<" "<<i.second<<endl;
	}
}
