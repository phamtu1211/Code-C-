#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,s;
	cin>>m>>s;
	if ((s==0&&m>1)||s>9*m){
		cout<<"-1 -1\n";
		return 0;
	}
	if (s==0&&m==1){
		cout<<"0 0\n";
		return 0;
	}
	string lon="";
	int t=s;
	for(int i=0;i<m;i++){
		int d=min(9,t);
		lon.push_back('0'+d);
		t=t-d;
	}
	t=s;
	string nho="";
	for(int i=0;i<m;i++){
		for(int j=0;j<=9;j++){
			if (j==0&&i==0){
				continue;
			}
			if (t-j>=0&&t-j<=9*(m-1-i)){
				nho.push_back('0'+j);
				t=t-j;
				break;
			}
		}
	}
	cout<<nho<<" "<<lon;
}
