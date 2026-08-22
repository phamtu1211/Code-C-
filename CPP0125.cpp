#include<iostream>
#include<math.h>
int nto(long long a){
	if (a<2) return 0;
	long long i;
	for(i=2;i<=sqrt(a);i++){
		if(a%i==0) return 0;
	}
	return 1;
}
using namespace std;
int main(){
	long long a,b,i;
	cin>>a>>b;
	if (a>b){
		long long t=a;
		a=b;
		b=t;
	}
	for(i=a;i<=b;i++){
		if (nto(i)==1) cout<<i<<" ";
	}	
}
