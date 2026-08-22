#include<bits/stdc++.h>
using namespace std;
int x[100];
int kt(int x[],int n){
	for(int i=1;i<=n/2;i++){
		if (x[i]!=x[n-i+1]) return 0;
	}
	return 1;
}
void thu(int i,int n){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if (i==n){
			if (kt(x,n)){
				for(int k=1;k<=n;k++){
					cout<<x[k]<<" ";
				}
				cout<<endl;
			}
		}
		else{
			thu(i+1,n);
		}
	}
}
int main(){
	int n;
	cin>>n;
	thu(1,n);
}
