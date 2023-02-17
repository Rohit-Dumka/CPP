//count set bits of any given decimal number

//	ex: 10 in binary =1010 ,no of 1's (set) are =>2 
//  ex2: 15 in binary =1111 , no of 1's (set) are =>4
#include<iostream>
using namespace std;

int main(){
	
	int n;
	//enter decimal number
	cin>>n;

	int count=0;

	while(n!=0){
		//performing bit operation on given decimal operation
		if((n&1)==1){
			count++;
		}
		n=n>>1;
	}
	
	cout<<count<<endl;
	//output-set bits in any number 
	
}
