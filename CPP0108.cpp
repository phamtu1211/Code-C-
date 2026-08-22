#include<bits/stdc++.h>
using namespace std;
int nto(int a){
	if (a<2) return 0;
	int i;
	for(i=2;i*i<=a;i++)
	if (a%i==0) return 0;
	return 1;
}
int tg(int a){
	int b=a%10;
	a=a/10;
	int c=a%10;
	a=a/10;
	if (b==c) return 0;
	if (b>c){
		while(a>0){
			b=a%10;
			if (b>=c) return 0;
			c=b;
			a=a/10;
		}
	}
	else{
		while(a>0){
			b=a%10;
			if (b<=c) return 0;
			c=b;
			a=a/10;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int l=pow(10,n-1);
		int r=pow(10,n)-1;
		int i,d=0;
		for(i=l;i<=r;i++){
			if (tg(i)){
				if (nto(i)) d++;
			}
		}
		cout<<d<<endl;
	}
}
