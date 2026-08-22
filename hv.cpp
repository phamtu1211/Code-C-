#include<bits/stdc++.h>
using namespace std;
int n,k,d=0,kt=0;
char x[100];
void thu(int i){
	for(char j='B';j>='A';j--){
		x[i]=j;
		if (i==n){
			for(int h=1;h<=n;h++){
				if (x[h]=='A'){
					d++;
				}
				else{
					if (d==k) {
						kt++;
					}
					d=0;
				}
			}
			if (d==k) kt++;
				if (kt==1){
				for(int l=1;l<=n;l++){
					cout<<x[l];
				}
				cout<<endl;
			}
			d=0;
			kt=0;
		}
		else
		thu(i+1);
	}
}
int main(){
	cin>>n>>k;
	thu(1);
}
