#include<bits/stdc++.h>
using namespace std;
vector<bool> kt(10000001,true);
void sangnto(){
	kt[0]=kt[1]=false;
	for(long long i=2;i<=10000000;i++){
		if (kt[i]){
			for(long long j=i*i;j<=10000000;j=j+i){
				kt[j]=false;
			}
		}
	}
}
int main(){
	long long n;
	sangnto();
	cin>>n;
	for(int i=2;i<=n;i++){
		if (kt[i]) cout<<i<<" ";
	}
}
