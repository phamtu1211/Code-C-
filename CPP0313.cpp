#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,s1;
	getline(cin,s);
	cin>>s1;
	stringstream ss(s);
	string tu;
	while(getline(ss,tu,' ')){
		if (tu!=s1){
			cout<<tu<<" ";
		}
	}
}
