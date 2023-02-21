#include<iostream>
using namespace std;

bool isPrime(int n){

	for(int i=2;i<n;i++){

		//if divisible with others, not a prime no
		if(n%i==0){
			return 0;
			//0 => not prime
		}
	}
	return 1;
	//1 => prime 
}


int main(){
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;

	if(isPrime(n)){
		cout<<"is a prime number"<<endl;
	}
	else{
		cout<<"not a prime number"<<endl;
	}
}

