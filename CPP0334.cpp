#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string a[10000];
		stringstream ss(s);
		int d=0,kt=1,i;
		for(i=0;i<s.size();i++){
			if (s[i]>='0'&&s[i]<='9'){
				a[d]=a[d]+s[i];
				kt=0;
				if (i==s.size()-1) d++;
			}
			else if(kt==0){
				d++;
				kt=1;
			}
		}
		long long tong=0,max=0;
		for(i=0;i<d;i++){
			int t=stoi(a[i]);
			tong=tong+t;
			if (t>max) max=t;
		}
		cout<<max<<endl;
	}
}
