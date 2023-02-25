#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
	for(int i=0; i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
}

int main(){
//	static array
	int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
	for(int i=0; i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
}

int main(){
	//	static array
	int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
	
	//we can make the array dynamic too =>
	
	//	int arr[10];
	//	int i,size;
	//	cin>>size;
	//	for(i=0;i<size;i++)
	//	cin>>arr[i];

	cout<<"enter the key"<<endl;
	int key;
	cin>>key;

	bool found=search(arr,10,key);

	if(found)
	cout<<"key is present"<<endl;
	else
	cout<<"key isn't present"<<endl;

}
	
	cout<<"enter the key"<<endl;
	int key;
	cin>>key;

	bool found=search(arr,10,key);

	if(found)
	cout<<"key is present"<<endl;
	else
	cout<<"key isn't present"<<endl;

}
