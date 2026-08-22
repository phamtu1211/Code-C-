#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int i;
	stringstream ss(s);
	stringstream ss1(s);
	string tu,tu1;
	vector<string> c;
	int d=0;
	while(ss1>>tu1){
		d++;
	}
	int d1=0;
	while(ss>>tu){
		d1++;
		if (d!=d1){
		tu[0]=toupper(tu[0]);
		for(i=1;i<tu.size();i++){
			tu[i]=tolower(tu[i]);
		}
		}
		else
		{
			for(i=0;i<tu.size();i++){
				tu[i]=toupper(tu[i]);
			}
		}
		c.push_back(tu);
	}
	
	for(i=0;i<c.size()-2;i++){
		cout<<c[i]<<" ";
	}
	cout<<c[c.size()-2]<<", "<<c[c.size()-1];
	
}
