#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a=s.size();;
		int c[100]={0},i;
		int d=0;
		for(i=0;i<a;i++){
			c[s[i]]++;
		}
		for(i=0;i<a;i++){
			if (c[s[i]]==1) cout<<s[i];		
		}
		cout<<endl;
	}
}
