#include<bits/stdc++.h>
using namespace std;
int n,x[100]={0};
bool kt[100];
void thu(int i){
	for(int j=1;j<=n;j++){
		if (kt[j]){
			x[i]=j;
			kt[j]=false;
			if (i==n){
				for(int k=1;k<=n;k++){
					cout<<x[k];
				}
				cout<<" ";
			}
			else
			thu(i+1);
			kt[j]=true;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cin>>n;
	for(int i=1;i<=n;i++){
		kt[i]=true;
	}
	thu(1);
	cout<<endl;
}
}
