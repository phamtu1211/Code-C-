#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream f1;
	f1.open("DATA.in");
	int n;
	map <int,int> c;
	while(f1>>n){
		c[n]++;
	}
	for(auto x:c){
		cout<<x.first<<" "<<x.second<<endl;
	}
}
