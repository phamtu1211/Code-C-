#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i=2;
		while(n!=1){
			int d=0;
			while(n%i==0){
				n=n/i;
				d++;
			}
			if (d!=0){
			cout<<i<<" "<<d<<" ";
			d=0;	
			}
			else{
				i++;
			}
		}
		cout<<endl;
	}
}
