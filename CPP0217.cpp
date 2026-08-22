#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		int i,j;
		vector<long long> s;
		for(i=0;i<n*n;i++){
			long long x;
			cin>>x;
			s.push_back(x);
		}
		sort(s.begin(),s.end());
		cout<<s[k-1]<<endl;
	}
}
