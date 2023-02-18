#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,i=0;
	cout<<"enter decimal number"<<endl;
	cin>>n; //input
	int ans=0;

	while(n!=0){
		int bit=n&1; //performing bit operation
		ans=(bit*pow(10,i)) +ans;
		n=n>>1;
		i++;
	}
	
	cout<<"binary of the given number is : "<<ans<<endl;

}
