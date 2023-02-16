#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
//fibonacci sequence
	int a=0;//first term
	int b=1;//second term
	int c;
	cout<<a<<" "<<b<<" ";
	for(int i=1;i<=n;i++){
		int next=a+b;
		cout<<next<<" ";
		//printing till (n+2)th term
		a=b;
		b=next;
	}

}
