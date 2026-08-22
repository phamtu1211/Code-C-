#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int i;
		cin>>n;
		int a[n],max=0;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			if (a[i]>max) max=a[i];
		}
		cout<<max<<endl;
	}
	return 0;
}
