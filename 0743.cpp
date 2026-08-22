#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>ws;
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tu;
		int d=0;
		string moi[1000];
		while(ss>>tu){
			moi[d]=tu;
			d++;
		}
		for(int i=d-1;i>=0;i--){
			cout<<moi[i]<<" ";
		}
		cout<<endl;
	}
}
