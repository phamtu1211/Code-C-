#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char a;
		cin>>a;
		if (a>='a'&&a<='z') a=a-32;
		else{
			a=a+32;
		}
		cout<<a<<endl;
	}
}
