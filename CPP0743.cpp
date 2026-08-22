#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string x;
		string a[1000];
		int d=0;
		while(ss>>x){
			a[d]=x;
			d++;
		}
		for(int i=d-1;i>=0;i--){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
