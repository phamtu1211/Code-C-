#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if (n==0) cout<<"0\n";
		else if (n==1) cout<<"1\n";
		else{
		int a=0,b=1,c;
		for(int i=2;i<=n;i++){
			c=a+b;
			c=c%1000000007;
			a=b;
			b=c;
		}
		cout<<c<<endl;
		}
	}
}
