#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int min=a[0],max=0;
		for(i=1;i<n;i++){
			if (a[i]>min&&a[i]-min>max) max=a[i]-min;
			else{
				if(a[i]<min) min=a[i];
			}
		}
		if (max==0) cout<<"-1\n";
		else
		cout<<
	}
}
