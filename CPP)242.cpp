#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,a[n],b[n],j;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			cin>>b[i];
		}
		int max=0;
		for(i=0;i<n;i++){
			int t=0,t1=0;
			for(j=i;j<n;j++){
				t=t+a[j];
				t1=t1+b[j];
				if (t==t1&&j-i+1>max) max=j-i+1;
			}
		}
		cout<<max<<endl;
	}
}
