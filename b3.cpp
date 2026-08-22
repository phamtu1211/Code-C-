#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		int d=0;
		cin>>s>>k;
		for(int i=0;i<s.size();i++){
			int m[1000]={0};
			int x=0;
			for(int j=i;j<s.size();j++){
				if (m[s[j]]==0) x++;
				m[s[j]]++;
				if (x==k){
					d++;
				}
				if (x>k) break;
			}
		}
		cout<<d<<endl;
	}
}
