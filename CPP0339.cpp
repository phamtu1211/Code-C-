#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a=s.size(),i,j;
		int d=s.size();
		for(i=0;i<a-1;i++){
			for(j=i+1;j<a;j++){
				if (s[i]==s[j]) d++;
			}
		}
		cout<<d<<endl;
	}
}
