#include<bits/stdc++.h>
using namespace std;
vector<long long> nto;
vector <bool> kt(10000001,true);
void sangnto(){
	kt[0]=kt[1]=false;
	for(long long i=2;i<=10000000;i++){
		if (kt[i]){
			for(long long j=i*i;j<=10000000;j=j+i){
				kt[j]=false;
			}
		}
	}
	for(long long i=2;i<=10000000;i++){
		if (kt[i]) nto.push_back(i);
	}
}
int main(){
	int t;
	cin>>t;
	sangnto();
	while(t--){
		long long n;
		cin>>n;
		map<long long,long long> c;
		for(long long g:nto){
			if (g*g>n) break;
			while(n%g==0){
				c[g]++;
				n=n/g;
			}
		}
		if (n>1){
			c[n]++;
		}
		for(auto x:c){
			cout<<x.first<<" "<<x.second<<endl;
		}
		cout<<endl;
	}
}
