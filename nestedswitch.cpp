#include<iostream>
using namespace std;
int main(){
	char ch='1';
	int num=1;
	switch(ch){ //2*num
		case 1:	cout<<"first"<<endl;
				cout<<"first again"<<endl;
				break;

		case '1':switch(num){
				case 1:cout<<"value of num is "<<num<<endl;
				break;
				case 2:cout<<"not true "<<endl;
				break;
				}
				break;

		default: cout<<"it is default case"<<endl;

	}
}
