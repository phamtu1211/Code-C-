#include<bits/stdc++.h>
using namespace std;
string max_len(string s){
	int a=s.length(),max1=0,kt=-1;
	for(int i=0;i<a-1;i++){
		int l=i,r=i+1;
		while(l>=0&&r<a&&s[l]==s[r]){
			int len=r-l+1;
			if (len>max1){
				max1=len;
				kt=l;
			}
			l--;r++;
		}
	}
	if (max1==0) return "No";
	return s.substr(kt,max1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;	
		cout<<max_len(s);
		cout<<endl;
	}
}
