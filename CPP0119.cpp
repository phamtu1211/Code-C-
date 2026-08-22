#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2!=0) cout<<"0\n";
		else{
			int d=0,i;
			for(i=2;i*i<=n;i++){
				if (n%i==0){
					if (i%2==0) d++;
					if ((n/i)%2==0&&i!=n/i) d++;
				}
			}
			cout<<d+1<<endl;
		}
	}
}
