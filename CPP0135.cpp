#include<bits/stdc++.h>
using namespace std;
int nto(int a){
	if (a<2) return 0;
	int i;
	for(i=2;i<=sqrt(a);i++){
		if (a%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		for(i=4;i<=n;i++){
			if ((int)sqrt(i)*sqrt(i)==i){
				if (nto(sqrt(i))==1) cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
