#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		char a[]="ABBADCCABDCCABD";
		char b[]="ACCABCDDBBCDDBB";
		char c[20];
		cin>>n;
		for(i=0;i<15;i++){
			cin>>c[i];
		}
		float d=0;
		if (n==101){
			for(i=0;i<15;i++){
				if (c[i]==a[i]) d=d+(float)10/15;
			}
		}
		else
		if (n==102){
			for(i=0;i<15;i++){
				if (c[i]==b[i]) d=d+(float)10/15;
			}
		}
		cout<<fixed<<setprecision(2)<<d<<endl;
	}
}
