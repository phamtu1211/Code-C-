#include<bits/stdc++.h>
using namespace std;
bool tn(string a){
	if (a.size()==1) return false;
	for(int i=0;i<=a.size()/2;i++){
		if (a[i]!=a[a.size()-1-i]) return false;
	}
	return true;
}
int kt(string a,string b[],int n){
	for(int i=0;i<n;i++){
		if (a==b[i]) return i;
	}
	return -1;
}
int main(){
string s;
string a[1000];
int n=0;
int b[1000];
while(cin>>s){
	if (tn(s)){
		if (kt(s,a,n)==-1){
			a[n]=s;
			b[n]++;
			n++;
		}
		else
		{
			int c=kt(s,a,n);
			b[c]++;
		}
	}
}
for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if (a[j].size()>a[i].size()||(a[j].size()==a[i].size&&a[j]>a[i])){
			swap(a[j],a[i]);
			swap(b[j],b[i]);
		}
	}
}
for(int i=0;i<n;i++){
	cout<<a[i]<<" "<<b[i]<<endl;
}
}

