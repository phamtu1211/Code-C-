#include<bits/stdc++.h>
using namespace std;
int kt(int a,int d,int b[]){
	int i;
	for(i=0;i<d;i++){
		if (b[i]==a) return 1;
	}
	return 0;
}
int main(){
	int n;
	cin>>n;
	int i,a[105],c;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int b[1005];
	int d=0;
	for(i=0;i<n;i++){
		if (kt(a[i],d,b)==0){
			b[d]=a[i];
			d++;
			cout<<a[i]<<" ";
		}
	}
}
