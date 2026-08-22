#include<bits/stdc++.h>
using namespace std;
vector<bool> kt(1000001,true);
void sangnto(){
	kt[0]=kt[1]=false;
	for(long long i=2;i<=1000000;i++){
		if (kt[i]){
			for(long long j=i*i;j<=1000000;j=j+i){
				kt[j]=false;
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	sangnto();
	for(int i=2;i<=n;i++){
		if (kt[i]) cout<<i<<" ";
	}
}
