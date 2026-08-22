#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int k;
		cin>>k;
		int a=s.size(),j,d=0,i;
		if (a<26) cout<<"0\n";
		else{
			string b="abcdefghijklmnopqrstuvwxyz";
			for(i=0;i<a;i++){
				for(j=0;j<26;j++){
					if (s[i]==b[j]) {
						d++;
						b[j]=-1;
					}
				}
			}
			if (d+k>=26) cout<<"1\n";
			else
			cout<<"0\n";
		}
	}
}
