#include<iostream>
using namespace std;

bool checkPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cout<<"enter limit"<<"\n";
	cin>>n;
	int x=0;
	for(int i=2;i<n;i++){
		bool isPrime=checkPrime(i);
		if(isPrime)
			{
				x=x^i;
			}
	}
	cout<<x;
}

