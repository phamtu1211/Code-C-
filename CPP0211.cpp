#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,a[n],j;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int amin[n];
		amin[0]=a[0];
		for(i=1;i<n;i++){
			amin[i]=min(a[i],amin[i-1]);
		}
		int amax[n];
		amax[n-1]=a[n-1];
		for(j=n-2;j>=0;j--){
			amax[j]=max(a[j],amax[j+1]);
		}
		i=0;j=0;
		int kc=-1;
		while(i<n&&j<n){
			if (amin[i]<=amax[j]){
				kc=max(kc,j-i);
				j++;
			}
			else{
				i++;
			}
		} 
		cout<<kc<<endl;
	}
}

