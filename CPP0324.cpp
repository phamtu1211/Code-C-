#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		long long m;
		long long b;
		cin>>s>>b>>m;
		long long a=0;
			for(int i=0;i<s.size();i++){
				a=a*10+(s[i]-'0');
				a=a%m;
			}
		long long t1=1;
		while(b>0){
			if (b%2==1) t1=t1*a%m;
			a=a*a%m;
			b=b/2;
		}
		cout<<t1<<endl;
	}
}
