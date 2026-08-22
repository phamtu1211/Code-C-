#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i,j;
	cin>>n>>k;
	vector<int>a(k+1);
	for(i=1;i<=k;i++){
		a[i]=i;
	}
	while(true){
		for(i=1;i<=k;i++){
			cout<<a[i];
		}
		cout<<endl;
		int i=k;
		while(i>0&&a[i]==n-k+i){
			i--;
		}
		if (i==0) break;
		a[i]++;
		for(j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
