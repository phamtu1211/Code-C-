#include<bits/stdc++.h>
using namespace std;
int kt(string a,string b[],int c){
	for(int i=0;i<c;i++){
		if (b[i]==a) return i;
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
		string a[n];
		string b[n];
		int c[n];
		int d=0;
		
		for(int i=0;i<n;i++){
		string s;
		cin>>ws;
		getline(cin,s);
		stringstream ss(s),ss1(s);
		string tu;
		int d=0;
		while(ss>>tu){
			d++;
		}
		int d1=0;
		string ten="";
		while(ss1>>tu){
			for(int i=0;i<tu.size();i++){
				tu[i]=tolower(tu[i]);
			}
			if ((d-1)==d1) ten.insert(0,tu);
			else{
				ten=ten+tu[0];
			}
			d1++;
		}
		a[i]=ten;
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
		if (kt(a[i],b,d)==-1){
			b[d]=a[i];
			c[d]=1;
			d++;
		}
		else{
			int x=kt(a[i],b,d);
			c[x]++;
			cout<<c[x];
		}
		cout<<"@ptit.edu.vn"<<endl;
	}
}
