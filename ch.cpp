#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,tu;
	getline(cin,s);
	stringstream ss(s);
	int i,d=0;
	vector <string> v;
	while(ss>>tu){
		for(i=0;i<tu.size();i++){
			tu[i]=tolower(tu[i]);
		}
		v.push_back(tu);
	}
	string email=v[v.size()-1];
	for(i=0;i<v.size()-1;i++){
		email=email+v[i][0];
	}
	cout<<email<<"@stu.ptit.edu.vn";
}
