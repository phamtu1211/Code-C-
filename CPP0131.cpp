#include<bits/stdc++.h>
using namespace std;
int nto(int n){
	int i;
	for(i=2;i*i<=n;i++){
		if (n%i==0) return 0;
	}
	return 1;
}
void hehe(int i){
	int j;
	for(j=2;j*j<=i;j++){
		if (i%j==0&&nto(j)) {
			cout<<j<<" ";
			break;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,j;
		for(i=1;i<=n;i++){
			if (i==1) cout<<1<<" ";
			else if (nto(i)) cout<<i<<" ";
			else{
				hehe(i);
			}
		}
		cout<<endl;
	}
}
