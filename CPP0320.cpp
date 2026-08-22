#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		int i,j,d=0,kt=1;
		string a="0123456789";
		for(i=0;i<n.size();i++){
			if (n[0]=='0'){
				kt=0;
				break;
			}
			if (n[i]>='0'&&n[i]<='9'){
			for(j=0;j<=9;j++){
				if (n[i]==a[j]){
					d++;
					a[j]='b';
					break;
				}
			}
			}
			else{
				kt=0;
				break;
			}
		}
		if (kt==0) cout<<"INVALID\n";
		else{
			if (d==10) cout<<"YES\n";
			else
			cout<<"NO\n";
		}
	}
}
