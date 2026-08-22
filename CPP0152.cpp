#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,m,i,d=0;
		cin>>a>>m;
		for(i=0;i<=m-1;i++){
			if ((a*i)%m==1) {
				cout<<i<<endl;
				d++;
				break;
			}
		}
		if (d==0) cout<<"-1"<<endl;
	}
}
