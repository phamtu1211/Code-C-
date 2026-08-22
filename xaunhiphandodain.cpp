#include<bits/stdc++.h>
using namespace std;
int n,x[100];
int t=0;
void thu(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if (i==n){
			for(int k=1;k<=n;k++){
				t=t+x[k];
			}
			if (x[1]==1&&t%2==0){
				for(int k=1;k<=n;k++){
					cout<<x[k];
				}
				cout<<endl;
			}
			t=0;
		}
		else
		thu(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>n;
	thu(1);
	}
}
