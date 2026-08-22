#include<bits/stdc++.h>
using namespace std;
int uc(int a,int b){
	if (b==0) return a;
	return (uc(b,a%b));
}
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int kt[100001]={0};
	set<int> b;
	for(int i=0;i<n;i++){
		int x=a[i];
		for(int j=2;j*j<=x;j++){
			while(x%j==0){
				kt[j]=1;
				x=x/j;
			}
		}
		if (x>1) kt[x]=1;	
	}
	vector<bool>loai (m+1,true);
	for(int i=2;i<=m;i++){
		if (kt[i]==1){
			for(int j=i;j<=m;j=j+i){
				loai[j]=false;
			}
		}
	}
	for(int i=1;i<=m;i++){
		if (loai[i]){
			b.insert(i);
		}
	}
	cout<<b.size()<<endl;
	for(auto x:b){
		cout<<x<<" ";
	}
	cout<<endl;
}
