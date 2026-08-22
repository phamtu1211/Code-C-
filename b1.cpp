#include<bits/stdc++.h>
using namespace std;
int main(){
	string m[1000];
	char n[1000];
	int a=0;
	while(scanf("%s",&n)!=EOF){
		m[a++]=n;
	}
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<m[i].length();j++){
			m[i][j]=tolower(m[i][j]);
			if (m[i][j]=='.'||m[i][j]=='?'||m[i][j]=='!')
				m[i][j]='\n';
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<m[i].length();j++){
			if (i==0||(m[i-1][m[i-1].length()-1]=='\n'))
				m[i][0]=toupper(m[i][0]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<m[i].length();j++){
			cout<<m[i][j];
		}
		if (m[i+1][0]<'A'||m[i+1][0]>'Z')
			cout<<" ";
	}
}
