#include<iostream>
#include<math.h>
using namespace std;
int nto(long long a){
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
		long long n,max=0,i;
		cin>>n;
		if (nto(n)==1) cout<<n<<endl;
		else
		{
			for(i=2;i<=sqrt(n);i++){
				if (n%i==0){
					if (nto(i)==1&&i>max) max=i;
					if (nto(n/i)==1&&(n/i)>max) max=n/i;	
				}
			}
			cout<<max<<endl;
		}
	}
	return 0;
}
