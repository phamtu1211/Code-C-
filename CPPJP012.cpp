#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,i;
		cin>>a>>b;
		long long c[100];
		c[1]=1;c[2]=1;
		for(i=3;i<=b;i++){
			c[i]=c[i-1]+c[i-2];
		}	
		for(i=a;i<=b;i++){
			cout<<c[i]<<" ";
		}
		cout<<endl;
	}
}
