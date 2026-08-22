#include<bits/stdc++.h>
using namespace std;
int n,k;
int x[100];
void try1(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if (i==k){
			for(int l=1;l<=k;l++) cout<<x[l];
			cout<<" ";
		}
		else
			try1(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		try1(1);
		cout<<endl;
	}
}
