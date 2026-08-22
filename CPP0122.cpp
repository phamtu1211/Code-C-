#include<iostream>
#include<math.h>
using namespace std;
long long uc(long long a,long long b){
	if (b==0) return a;
	return (uc(b,a%b));
}
long long bc(long long a,long long b){
	return (a*b/uc(a,b));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i;
		long long a=1;
		cin>>n;
		for(i=2;i<=n;i++){
			a=bc(a,i);
		}
		cout<<a<<endl;
	}
}
