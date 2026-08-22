#include<bits/stdc++.h>
using namespace std;
int main(){
	ifstream f1;
	ofstream f2;
	f1.open("Test1.txt");
	f2.open("Test2.txt");
	int n;
	f1>>n;
	f2<<n;
	f1.close();
	f2.close();
}
