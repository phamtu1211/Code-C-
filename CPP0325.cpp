#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		int t1=0,t2=0,i,t;
		int b=a.size();
		for(i=0;i<b;i++){
			if (i%2==0){
				t=a[i]-'0';
				t1=t1+t;
			}
			else{
				t=a[i]-'0';
				t2=t2+t;
			}
		}
		t1=t1-t2;
		if (t1%11==0) cout<<"1\n";
		else
		cout<<"0\n";
	}
}
