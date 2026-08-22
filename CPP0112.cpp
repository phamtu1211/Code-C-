#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		double x=c-a,y=d-b;
		double t=sqrt(x*x+y*y);
		cout<<fixed<<setprecision(4)<<t<<endl;
	}
}
