#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<char> s(n+1);
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	int d=1;
	int t=0;
	for(int i=1;i<n;i++){
		if (s[i]==s[i+1]){
			d++;
		}
		else{
			if (d>=2){
				t=t+d*(d-1)/2;
			}
			d=1;
		}
	}
	if (d>=2){
			t=t+d*(d-1)/2;
	}
	cout<<t<<endl;
}
