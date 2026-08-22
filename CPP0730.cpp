#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long max1=a[0],max2=a[0];
		for(int i=1;i<n;i++){
				if (a[i]>max2+a[i]){
					max2=a[i];
					if (max2>max1){
						max1=max2;
					}
					continue;
				}
				max2=max2+a[i];
				if(max2>max1){
					max1=max2;
				}	
		}
		cout<<max1<<endl;
	}
}

