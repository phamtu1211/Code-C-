#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream f1;
	int n;
	f1.open("DATA.in");
	map<int,int> a;
	while(f1>>n){
		a[n]++;
	}
	for(auto x:a){
		cout<<x.first<<" "<<x.second<<endl;
	}
	f1.close();
}
