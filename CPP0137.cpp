#include<bits/stdc++.h>
using namespace std;
vector<bool> kt(1000001,true);
void sang(){
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
	int t;
	cin>>t;
	sang();
	while(t--){
		long long l,r;
		cin>>l>>r;
		long long i,d=0;
		for(i=l;i*i<=r;i++){
			if (kt[i]) d++;
		}
		cout<<d<<endl;
	}
}
