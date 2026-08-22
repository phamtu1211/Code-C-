#include<bits/stdc++.h>
using namespace std;
int n;
int x[1000];
void try1(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if (i==n){
			for(int l=1;l<=n;l++){
				cout<<x[l];
			}
			cout<<" ";
		}
		else{
			try1(i+1);
		}
	}
}
int main(){
	cin>>n;
	try1(1);
}
