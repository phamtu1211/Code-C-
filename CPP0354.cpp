#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i,a=s.size();
		string b[100];
		int c[100]={0};
		int d=0;
		for(i=0;i<a;i++){
			if (s[i]!=s[i-1]){
				b[d]=s[i];
				c[d]=1;
				d++;
			}
			else{
				c[d-1]++;
			}
		}
		for(i=0;i<d;i++){
			cout<<b[i]<<c[i];
		}
		cout<<endl;
		
	}
}
