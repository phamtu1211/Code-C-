#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int i=2,d=1;
		while(n!=1&&(d!=k+1)){
		while(n%i==0&&d!=k+1){
			n=n/i;
			if (d==k) cout<<i<<endl;
			d++;
		}
		i++;
		}
		if (k>=d) cout<<"-1\n";
	}
}
