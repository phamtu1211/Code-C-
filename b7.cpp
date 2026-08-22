#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>ws;
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tu;
		int kt=1,d=0,d1=0,sl=0;
		while(ss>>tu){
			sl++;
			int a=tu.size();
			if ((tu[a-1]-'0')%2==0) d++;
			else
			d1++;
		}
		if ((sl%2==0&&d>d1)||(sl%2!=0&&d1>d)) cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
