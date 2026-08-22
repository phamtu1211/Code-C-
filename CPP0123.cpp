#include<iostream>
#include<math.h>
using namespace std;
int kt(int n){
	if (n<2) return 0;
	int i;
	for(i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	if (kt(n)==1) cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
