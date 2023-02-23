#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a nuber"<<endl;
	cin>>num;
	
	while(num>0){
		if(num>=1000){
			cout<<"M";
		num=num-1000;
		}
		else if(num>=900){
			cout<<"CM";
			num-=900;
		}
		else if(num>=500){
			cout<<"D";
			num-=500;
		}else if(num>=400){
			cout<<"CD";
			num-=400;
		}else if(num>=100){
			cout<<"C";
			num-=100;
		}else if(num>=90){
			cout<<"XC";
			num-=90;
		}else if(num>=50){
			cout<<"L";
			num-=50;
		}else if(num>=40){
			cout<<"LX";
			num-=40;
		}else if(num>=10){
			cout<<"X";
			num-=10;
		}else if(num>=9){
			cout<<"IX";
			num-=9;
		}else if(num>=5){
			cout<<"V";
			num-=5;
		}
		else if(num>=4){
			cout<<"IV";
			num-=4;
		}else{
			cout<<"I";
			num-=1;
		}
	}
}
