
#include <bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,x;
		cin>>n;
		vector<long long> a(n);
		for(int i=0;i<n;i++){
			cin>>x;
			a[i]=x*x;
		}
		sort(a.begin(),a.end());
		int ok=0;
		for(int i=n-1;i>=2;i--){
			int l=0,r=i-1;
			while(l<r){
				long long sum=a[l]+a[r];
			if(sum==a[i]){
				ok=1;
				break;
			}
			else if(sum>a[i]) r--;
			else l++;
		}
		if (ok==1) break;
	}
		if(ok==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
		
	}
	}


