#include<bits/stdc++.h>
using namespace std;
int main(){
//	ofstream f;
//	f.open("Test.txt");
//	string s;
//	getline(cin,s);
//	f<<s;
//	f.close();
//	return 0;
	ifstream f;
	f.open("Test.txt");
	string s;
	while(getline(f,s)){
		cout<<s<<endl;
	}
	f.close();
}
