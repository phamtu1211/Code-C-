#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		string s;
		cin.ignore();
		getline(cin,s);
		string tu;
		stringstream ss(s);
		string c[100];
		int d=0;
		while(ss>>tu){
			tu[0]=toupper(tu[0]);
			for(int i=1;i<tu.size();i++){
				tu[i]=tolower(tu[i]);
			}
			c[d]=tu;
			d++;
		}
		if (a==1){
			cout<<c[d-1]<<" ";
			for(int i=0;i<d-1;i++){
				cout<<c[i]<<" ";
			}
			cout<<endl;
		}
		else if(a==2){
			for(int i=1;i<d;i++){
				cout<<c[i]<<" ";
			}
			cout<<c[0]<<endl;
		}
	}
}
