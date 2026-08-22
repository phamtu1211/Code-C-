#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,a[1005];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int min=a[0]+a[1];
		int j;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if (abs(a[i]+a[j])<abs(min)) min=a[i]+a[j];
			}
		}
		cout<<min<<endl;
	}
	return 0;
}
