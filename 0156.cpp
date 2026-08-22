#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int b,p;
		cin>>b>>p;
		long long t=0;
		for(long long i=1;i<p;i++){
			if ((i*i)%p==1){
				if (i>b) continue;
				t=t+(b-i)/p+1;
			}
		}
		cout<<t<<endl;
	}
}
