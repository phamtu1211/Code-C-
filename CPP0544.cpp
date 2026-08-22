#define PI 3.141592653589793238
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		double x1,x2,y1,y2,z1,z2;
		cin>>x1>>x2>>y1>>y2>>z1>>z2;
		double a=sqrt((y2-x2)*(y2-x2)+(y1-x1)*(y1-x1));
		double b=sqrt((z1-x1)*(z1-x1)+(z2-x2)*(z2-x2));
		double c=sqrt((z1-y1)*(z1-y1)+(z2-y2)*(z2-y2));
		if (a+b<=c||b+c<=a||c+a<=b) cout<<"INVALID\n";
		else{
			double s=0.25*sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
			double r=(a*b*c)/(4*s);
			cout<<fixed<<setprecision(3)<<PI*r*r<<endl;
		}
	}
}
