#include<bits/stdc++.h>
using namespace std;
int x[25];
void thu(int i,int n){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if (i==n){
			for(int k=1;k<=n;k++){
				cout<<x[k];
			}
			cout<<endl;
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
