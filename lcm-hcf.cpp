#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		int aa=a,bb=b;
		if(a==b){
			cout<<a<<" "<<a<<"\n";
		}
		else{
			while(a!=0){
				a=a%b;
				if(a!=0){
				int temp=a;
				a=b;
				b=temp;}
			}
			int hcf=b;
			int m=aa*bb;
			cout<<m/hcf<<" "<<hcf<<"\n";
		}
	}
}