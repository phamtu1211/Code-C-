#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<char> c;
		int i,tg=0,d=0;
		for(i=0;i<s.size();i++){
			if (s[i]>='0'&&s[i]<='9'){
				int t0=s[i]-'0';
				tg=tg+t0;
			}
			else{
				c.push_back(s[i]);
			}
		}
		sort(c.begin(),c.end());
		for(auto x:c){
			cout<<x;
		}
		cout<<tg<<endl;
	}
}
