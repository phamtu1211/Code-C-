#include<iostream>
#include<math.h>
int kt(int n){
	int a,dc=0,dl=0;
	while(n>0){
		a=n%10;
		if (a%2==0) {
			dc++;
		}
		else{
			dl++;
		}
		n=n/10;
	}
	if (dc!=dl) return 0;
	return 1;
}
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=pow(10,n-1);
	int b=pow(10,n);
	int i,d=0;
	for(i=a;i<b;i++){
		if(kt(i)==1) {
			d++;
			cout<<i<<" ";
			if (d%10==0) cout<<"\n";
		}
	}
} 
