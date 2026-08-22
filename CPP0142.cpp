#include<bits/stdc++.h>
using namespace std;
int nto(int a){
	if (a<2) return 0;
	for(int i=2;i*i<=a;i++)
	if(a%i==0) return 0;
	return 1;
}
int uc(int a,int b){
	if (b==0) return a;
	return (uc(b,a%b));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int i,d=1;
		for(i=2;i<x;i++){
			if (uc(i,x)==1){
				d++;
			}
		}
		if (nto(d)) cout<<"1\n";
		else
		cout<<"0\n";
	}
}
