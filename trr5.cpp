#include<bits/stdc++.h>
using namespace std;
int x[20];
vector<bool>kt(20,true);
void thu(int i,int n){
	for(int j=1;j<=n;j++){
		if (kt[j]){
		x[i]=j;
		kt[j]=false;
		if (i==n){
			for(int k=1;k<=n;k++){
				cout<<x[k];
			}
			cout<<endl;
		}
		else{
			thu(i+1,n);
		}
		kt[j]=true;
		}
	}
}
int main(){
	int n;
	cin>>n;
	thu(1,n);
}
