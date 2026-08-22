#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		int d=0;
		int i;
		for(i=2;i<=n;i++){
			int a=i;
			while(a%p==0){
				d++;
				a=a/p;
			}
		}
		cout<<d<<endl;
	}
}
