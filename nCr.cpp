#include<iostream>
using namespace std;
//fn to perform factorial operation
int fact(int n){
	int f=1;

	for(int i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
//function to perform nCr operation
int nCr(int n,int r){
	int num=fact(n);

	int denom=fact(r)*fact(n-r);

	int ans =num/denom;

	return ans;
	//return num/denom;

}

int main(){
	int n,r;
	//enter n and r
	cin>>n>>r;
	int answer =nCr(n,r);
	cout<<"answer is : "<<answer<<endl;
}

