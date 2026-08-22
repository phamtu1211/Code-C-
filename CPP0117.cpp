#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a,b,t1=n;
		while(t1>=10){
			int g=t1,s=0;
			while(g>0){
				b=g%10;
				s=s+b;
				g=g/10;
			}
			t1=s;
		}
		cout<<t1<<endl;
	}
}
