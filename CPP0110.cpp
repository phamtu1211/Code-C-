#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		int i;
		cin>>n;
		int a=n.size();
		for(i=0;i<a;i++){
			if (n[i]=='0'&&n[i+1]=='8'&&n[i+2]=='4') {
				i=i+2;
			}
			else
			cout<<n[i];
		}
		cout<<endl;
	}
}
