#include<iostream>
#include<math.h>
int nto(int a){
	if (a<2) return 0;
	int i;
	for(i=2;i<=sqrt(a);i++){
		if (a%i==0) return 0;
	}
	return 1;
}
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=2;
	if (nto(n)==1) cout<<n<<" "<<"1";
	else{
	while(n!=1){
		int d=0;
		while(n%i==0){
			n=n/i;
			d++;
		}
		if (d!=0){
			cout<<i<<" "<<d<<endl;
		}
		else
		{
			i++;
		}
	}
	}
}
