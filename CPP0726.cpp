#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		long long t1=0;
		a=a%c;
		while(b>0){
			if (b%2==1) t1=(t1+a)%c;
			a=(a*2)%c;
			b=b/2;
		}
		cout<<t1<<endl;
	}
}
