#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin>>x>>n;
	int i,j;
	long long t=0,s;
	for(i=1;i<=2*n+1;i=i+2){
		s=1;
		for(j=1;j<=i;j++){
			s=s*x;
		}
		t=t+s;
	}
	cout<<t;
}
