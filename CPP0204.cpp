#include<bits/stdc++.h>
using namespace std;
vector<bool> s(1000001,true);
void sangnto(){
	s[0]=s[1]=false;
	for(long long i=2;i<=1000001;i++){
		if (s[i]){
			for(long long j=i*i;j<=1000001;j=j+i){
				s[j]=false;
			}
		}
	}
}
int main(){
	sangnto();
	int t;
	cin>>t;
	while(t--){
		int l,r,d=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++){
			if (s[i]) d++; 
		}
		cout<<d<<endl;
	}
}
