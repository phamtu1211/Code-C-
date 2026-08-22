#include<bits/stdc++.h>
using namespace std;
long long x;
bool dk(long long a,long long b){
	return(abs(x-a)<abs(x-b));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n>>x;
		vector<long long> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		stable_sort(a.begin(),a.end(),dk);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
