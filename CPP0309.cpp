#include<bits/stdc++.h>
using namespace std;
void bai()
{
	string a;
	getline(cin,a);
	stringstream x(a);
	string word;
	int d=0;
	while(x>>word){
		d++;
	}
	cout<<d<<endl;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		bai();
	}
}
