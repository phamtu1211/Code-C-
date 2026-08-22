#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,b;
	cin>>n>>k>>b;
	int i,a[b],j;
	for(i=0;i<b;i++){
		cin>>a[i];
	}
	sort(a,a+b);
	int nho=100000;
	int c[n+1]={0};
	for(i=1;i<=n;i++){
		if (binary_search(a,a+b,i)){
			c[i]=c[i-1]+1;
		}
		else{
			c[i]=c[i-1];
		}
	}
	for(i=1;i<=n-k+1;i++){
		int j=i+k-1;
		if (c[j]-c[i]<nho#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,b;
	cin>>n>>k>>b;
	int i,a[b],j;
	for(i=0;i<b;i++){
		cin>>a[i];
	}
	sort(a,a+b);
	int min=100000;
	int c[n+1]={0};
	for(i=1;i<=n;i++){
		if (binary_search(a,a+b,i)){
			c[i]=c[i-1]+1;
		}
		else{
			c[i]=c[i-1];
		}
	}
	for(i=1;i<=n-k+1;i++){
		int j=i+k-1;
		if (c[j]-c[i]<min) min=c[j]-c[i];
	}
	cout<<min;
}    ) nho=c[j]-c[i];
	}
	cout<<nho;
}    
