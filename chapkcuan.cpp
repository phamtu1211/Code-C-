#include<bits/stdc++.h>
using namespace std;
int n,k;
int x[100]={0};
int t=0;
void thu(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if (i==k){
			for(int h=1;h<=k;h++){
				t=t+x[h];
			}
			if (t%2!=0){
				for(int h=1;h<=k;h++){
					cout<<x[h];
				}
				t=0;
				cout<<" ";
			}
		}
		else
		thu(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>n>>k;
	thu(1);
	cout<<endl;
	}
}
