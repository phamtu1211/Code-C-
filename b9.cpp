#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		string s;
		cin>>m>>n>>s;
		vector<long long> dp(n,0);
		for(char c:s){
			int d=c-'0';
			vector<long long> moidp=dp;
			moidp[d%n]=moidp[d%n]+1;
			for(int i=0;i<n;i++){
				int moii=(i*10+d)%n;
				moidp[moii]=moidp[moii]+dp[i];
			}
			dp=moidp;
		}
		cout<<dp[0]<<endl;
	}
}
