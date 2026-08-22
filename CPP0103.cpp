#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	double t=0;
	for(i=1;i<=n;i++){
	t=t+(double)1/i;
	}
	cout<<fixed<<setprecision(4) <<t<<endl;
	return 0;
}
