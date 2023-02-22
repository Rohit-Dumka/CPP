#include<iostream>
using namespace std;

int main(){
  
	int n;
  	//input
	cin>>n;
  
	int r,ans=0;
	//r- remainder
	//ans- reverse
	while(n>0){
		r=n%10;
		if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
			return 0;
			//just in case your number (i.e. reverse*10<max or min) exceeds the upper bound or lower bound which is yk -2^(31) to 2^(31)-1 
		}
		ans=ans*10 + r;
		n=n/10;
	}
	cout<<"reverse of number is : "<<ans<<endl;
}
