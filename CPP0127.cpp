#include<iostream>
#include<math.h>
using namespace std;
int nto(int a){
	if(a<2) return 0;
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
		int n,i,d=0;
		cin>>n;
		for(i=2;i<=n/2;i++){
		 if (nto(i)==1&&(nto(n-i)==1)){
		 	cout<<i<<" "<<n-i;
		 	d++;
		 	break;
		 	}
		}
		if(d==0) cout<<"-1";
		cout<<endl;
	}
}
