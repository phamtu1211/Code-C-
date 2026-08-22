#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long a;
		int d[10]={0,1,2,3,4,5,6,7,8,9};
		int c[10]={0};
		cin>>n>>a;
		long long j,b,i;
		while(a>0){
			b=a%10;
			if (b==2) c[2]++;
			if (b==3) c[3]++;
			if (b==4) {
				c[2]=c[2]+2;
				c[3]++;
			}
			if (b==5) c[5]++;
			if (b==6){
				c[5]++;
				c[3]++;
			}
			if (b==7){
				c[7]++;
			}
			if (b==8){
				c[7]++;
				c[2]=c[2]+3;
			}
			if (b==9){
				c[7]++;
				c[3]=c[3]+2;
				c[2]++;
			}
			a=a/10;
		}
		for(i=9;i>=2;i--){
			if (c[i]>=1){
				for(int j=1;j<=c[i];j++){
					cout<<d[i];
				}
			}
		}
		cout<<endl;
	}
}
