#include<bits/stdc++.h>
using namespace std;
int b[100001]={0};
bool dk(int a1,int a2){
		if (b[a1]==b[a2]) return (a1<a2);
		return (b[a1]>b[a2]);
	}
int main(){
	int t;
	cin>>t;
	while(t--){
	memset(b,0,sizeof(b));
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	sort(a,a+n,dk);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		}
	cout<<endl;
	}
}

