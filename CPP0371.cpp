#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	int i,j;
	string b="aeiouy";
	for(i=0;i<a.size();i++){
		int kt=1;
		a[i]=tolower(a[i]);
		for(j=0;j<6;j++){
			if (a[i]==b[j]) kt=0;
		}
		if (kt==1) cout<<"."<<a[i];
	}
}
