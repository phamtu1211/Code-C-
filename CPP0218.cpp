#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],min1=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if (a[i]>min1) min1=a[i];
		}
		sort(a,a+n);
		int s=0;
		for(int i=0;i<n-1;i++){
			if (a[i]!=a[i+1]) s=1;
		}
		int j=1,d=0;
		while(j<=min1){
			int kt=1;
			for(int i=1;i<n;i++){
				if ((a[i]-a[0])%j!=0){
					kt=0;
					break;
				}
			}
			if (kt==1) d++;
			j++;
		}
		if (s==0){
			cout<<"0"<<endl;
		}
		else
		cout<<d<<endl;
	}
}
