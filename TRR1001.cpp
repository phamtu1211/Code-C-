#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a[105][105];
	ifstream f1;
	ofstream f2;
	set<int> b;
	bool kt[105][105];
	f1.open("DT.INP");
	f2.open("DT.OUT");
	f1>>t;
	f1>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			f1>>a[i][j];
			kt[i][j]=false;
		}
	}
	if (t==1){
		int d;
		for(int i=0;i<n;i++){
			d=0;
			for(int j=0;j<n;j++){
				if (a[i][j]==1) d++;
			}
			f2<<d<<" ";
		}
	}
	else
	if (t==2){
		int d=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if (a[i][j]==1&&kt[i][j]==false){
					kt[i][j]=true;
					b.insert(i);
					b.insert(j);
					d++;
				}
			}
		}
		f2<<b.size()<<" "<<d<<endl;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if (kt[i][j]==true){
					f2<<i+1<<" "<<j+1<<endl;
				}
			}
		}
	}
	f1.close();
	f2.close();
}
