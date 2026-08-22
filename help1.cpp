#include <bits/stdc++.h>
using namespace std; 
int s=0;
class SinhVien{
	private:
	string id,t,l,n;
	float gpa;
	public:
	friend istream& operator>>(istream &in,SinhVien &a){
		cin>>ws;
		getline(cin,a.t);
		cin>>a.l>>a.n;
		cin>>a.gpa;
		if(a.n[1]=='/') a.n="0"+a.n;
		if(a.n[4]=='/') a.n.insert(3,"0");
		s++;
		if(s<10) a.id="B20DCCN00"+to_string(s);
		else a.id="B20DCCN0"+to_string(s);
		stringstream ss(a.t);
		string w,z="";
		while(ss>>w){
			for(int i=0;i<w.size();i++) w[i]=tolower(w[i]);
			w[0]=toupper(w[0]);
			z+=w+" ";
		}
		a.t=z;
		return in;
	}
	friend ostream& operator<<(ostream &out,SinhVien a){
		cout<<a.id<<" "<<a.t<<" "<<a.l<<" "<<a.n<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
		return out;
	}
	float getgpa() {
		return gpa;
	}
	
};
bool cmp(SinhVien a,SinhVien b){
		return a.getgpa()>b.getgpa();
	}
	void sapxep(SinhVien ds[], int n){
		sort(ds,ds+n,cmp);
	}


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
