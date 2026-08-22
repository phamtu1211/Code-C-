#include<bits/stdc++.h>
using namespace std;
int kt(int n,int a[],int d){
	for(int i=0;i<d;i++){
		if (a[i]==n) return i;
	}
	return -1;
}
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string tu;
	int a[10000];
	int b[10000];
	int d=0;
	while(ss>>tu){
		int n=stoi(tu);
		if (kt(n,a,d)==-1){
			a[d]=n;
			b[d]=1;
			d++;
		}
		else{
			int cs=kt(n,a,d);
			b[cs]++;
		}
	}
	for(int i=0;i<d;i++){
		cout<<a[i]<<" "<<b[i]<<endl;
	}
}
