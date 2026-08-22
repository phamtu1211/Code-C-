#include<bits/stdc++.h>
using namespace std;
int kt(int a,int d,int b[]){
	int i;
	for(i=0;i<d;i++){
		if (b[i]==a) return i;
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int b[n];
		int c[n];
		int d=0,d1=0;
		for(i=0;i<n;i++){
			if (kt(a[i],d,b)==-1){
				b[d]=a[i];
				c[d]=1;
				d++;
			}
			else
			{
				c[kt(a[i],d,b)]++;
			}
		}
		for(i=0;i<d;i++){
			if (c[i]>1) d1=d1+c[i];
		}
		cout<<d1<<endl;
	}
}
