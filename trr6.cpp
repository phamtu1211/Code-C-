#include<bits/stdc++.h>
using namespace std;
int x[20]={0};
void thu(int i,int n,int k){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if (i==k){
			for(int d=1;d<=k;d++){
				cout<<x[d]<<" ";
			}
			cout<<endl;
		}
		else
		thu(i+1,n,k);
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	thu(1,n,k);
}
