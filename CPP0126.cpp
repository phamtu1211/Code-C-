#include<iostream>
#include<math.h>
using namespace std;
int nto(int a){
	if (a<2) return 0;
	int i;
	for(i=2;i<=sqrt(a);i++){
		if (a%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,i;
		cin>>m>>n;
		for(i=m;i<=n;i++){
			if (nto(i)==1)cout<<i<<" ";
		}
		cout<<endl;
	}
}
