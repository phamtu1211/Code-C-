#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i,a[n],j,k;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int kt=1;
		for(i=0;i<n-2&&kt==1;i++){
			for(j=i+1;j<n-1&&kt==1;j++){
				long long tong=1LL*a[i]*a[i]+1LL*a[j]*a[j];
				long long t1=sqrt(tong);
				if (t1*t1==tong){
					for(k=j+1;k<n;k++){
						if (tong==1LL*a[k]*a[k]) {
							cout<<"YES\n";
							kt=0;
							break;
						}
					}
				}
			}
		}
		if (kt==1) cout<<"NO\n";
	}
}
