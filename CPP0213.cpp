#include<bits/stdc++.h>
using namespace std;
vector<int> f(20,0);
void fi(){
	f[0]=0;f[1]=1;
	for(int i=2;i<=20;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
using namespace std;
int main(){
	int t;
	cin>>t;
	fi();
	while(t--){
		int n;
		cin>>n;
		int i,a[n],j;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<=20;j++){
				if (a[i]==f[j]) {
					cout<<a[i]<<" ";
					break;
				}
			}
		}
		cout<<endl;
	}
}
