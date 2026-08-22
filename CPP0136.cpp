#include<bits/stdc++.h>
using namespace std;
//int nto(int a){
//	if (a<2) return 0;
//	for(int i=2;i*i<=a;i++){
//		if (a%i==0) return 0;
//	}
//	return 1;
//}
vector<bool> kt(1000001,true);
void sangnt(){
	kt[0]=kt[1]=false;
	for(long long i=2;i*i<= 1000000;i++){
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
	sangnt();
	while(t--){
		long long n;
		cin>>n;
		int d=0;
		for(long long i=2;i*i<=n;i++){
		if (kt[i]) d++;
	}
	cout<<d<<endl;
	}
}
