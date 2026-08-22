#include<bits/stdc++.h>
using namespace std;
long long uc(long long a,long long b){
	if (b==0) return a;
	return (uc(b,a%b));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		long long b=uc(x,y);
		long long i;
		for(i=1;i<=b;i++){
			cout<<a;
		}
		cout<<endl;
	}
}
