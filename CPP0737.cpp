#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int dau=0,cuoi=k-1;
		double max=-9999;
		for(int i=0;i<n-k+1;i++){
			double t=0;
			for(int j=i;j<i+k;j++){
				t=t+a[j];
			}
			t=t/k;
			if (t>max) {
				max=t;
				dau=i;
				cuoi=i+k;
			}
		}
		for(int i=dau;i<cuoi;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
