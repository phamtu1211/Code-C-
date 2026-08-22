#include<bits/stdc++.h>
using namespace std;
int kt(int a,int b[],int d){
	int i;
	for(i=0;i<d;i++){
		if (a==b[i]) return i;
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int b[10];
		int d=0;
		for(i=0;i<n;i++){
			int c;
			while(a[i]>0){
				c=a[i]%10;
				if (kt(c,b,d)==-1){
					b[d]=c;
					d++;
				}
				a[i]=a[i]/10;
			}
		}
		sort(b,b+d);
		for(i=0;i<d;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
