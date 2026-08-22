#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	long long s=0;
	for(i=1;i<=n;i++){
		long long t=1;
		for(j=1;j<=i;j++){
			t=t*j;
		}
		s=s+t;
	}
	cout<<s;
}
