#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,i,j;
		cin>>n>>m;
		int a[n],b[m];
		set<int> hop,giao,sa,sb;
		for(i=0;i<n;i++){
			cin>>a[i];
			sa.insert(a[i]);
			hop.insert(a[i]);
		}
		for(j=0;j<m;j++){
			cin>>b[j];
			sb.insert(b[j]);
			hop.insert(b[j]);
		}
		for(set<int>::iterator it=hop.begin();it!=hop.end();it++){
			cout<<*it<<" ";
		}
		cout<<endl;
		for(set<int>::iterator it=sa.begin();it!=sa.end();it++){
			if (sb.count(*it)) giao.insert(*it);
		}
		for(set<int>::iterator it=giao.begin();it!=giao.end();it++){
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}
