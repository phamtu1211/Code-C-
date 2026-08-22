#include<bits/stdc++.h>
using namespace std;
//int kt(long long n){
//	int a,b,t;
//	b=n%10;
//	n=n/10;
//	while(n>0){
//		a=n%10;
//		t=a-b;
//		if (t<0) t=-t;
//		if (t==1){
//			b=a;
//		}
//		else{
//			return 0;
//		}
//		n=n/10;
//	}
//	return 1;
//}
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		long long n;
//		cin>>n;
//		if (kt(n)==1) cout<<"YES\n";
//		else
//		cout<<"NO\n";
//	}
//}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,kt=1;
		for(i=0;i<s.size()-1;i++){
			int a=s[i]-'0';
			int b=s[i+1]-'0';
			if (abs(a-b)!=1){
				kt=0;
				break;
			}
		}
		if (kt==1) cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
