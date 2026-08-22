#include<bits/stdc++.h>
using namespace std;
bool kt(string s){
	int a=s.length();
	if (a>10) return false;
	for(int i=0;i<s.length();i++){
		if (s[i]<'0'||s[i]>'9') return false;
	}
	return true;
}
int main(){
	ifstream f1;
	ofstream f2;
	f1.open("DATA.in");
	string s;
	long long t=0;
	while(f1>>s){
		if (kt(s)){
			t=t+stoi(s);
		}
	}
	cout<<t;
	f1.close();
}
