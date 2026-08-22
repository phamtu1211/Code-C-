#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int  n1,n2,n3;
		cin>>n1>>n2>>n3;
		long long i,j,k;
		long long  a[n1],b[n2],c[n3];
		vector<long long> d;
		long long x;
		for(i=0;i<n1;i++){
			cin>>a[i];
		}
		for(j=0;j<n2;j++){
			cin>>b[j];
		}
		for(k=0;k<n3;k++){
			cin>>c[k];
		}
		i=0;j=0;k=0;
		while(i<n1&&j<n2&&k<n3){
			if (a[i]==b[j]&&b[j]==c[k]){
				d.push_back(a[i]);
				i++;
				j++;
				k++;
			}
			else
			if (a[i]<b[j]) i++;
			else
			if (b[j]<c[k]) j++;
			else
			k++;
		}
		if (d.size()==0) cout<<"-1";
		else
		for(auto x:d){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
