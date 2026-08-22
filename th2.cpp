#include<bits/stdc++.h>
using namespace std;
vector<long long> f(1000001,0);
void fibo(){
	f[0]=0,f[1]=1;
	for(int i=2;i<=100000;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
void ham(){
	int n;
	cin>>n;
	int i;
	cout<<f[n]<<endl;
}
int main(){
	int t;
	cin>>t;
	fibo();
	while(t--){
		ham();
	}
}
