#include<bits/stdc++.h>
using namespace std;
int kt(string a,string b[],int d){
	int i;
	for(i=0;i<d;i++){
		if (a==b[i]) return i;
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	string s[10000];
	int i;
	for(i=0;i<n;i++){
		getline(cin,s[i]);
	}
	int d=0,j;
	string b[1000];
	for(i=0;i<n;i++){
		if (kt(s[i],b,d)==-1){
			b[d]=s[i];
			d++;
		}
	}
	cout<<d;
}
