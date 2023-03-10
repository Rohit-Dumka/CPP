//the below program swap the alternate elements present in array
//ex : let we have 1,3,4,7 total four elements then after swapping(alternate) the array will be-
// 3,1,7,4 
#include<iostream>
using namespace std;

void print(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

void s(int arr[],int size){
	for(int i=0;i<size;i+=2){
		if(i+1<size){
			swap(arr[i],arr[i+1]);
		}
	}
}

int main(){
	int even[8]={4,5,7,8,11,9,0,-3};
	int odd[5]={11,22,9,33,8};

	s(even,8);//swap done 
	print(even,8);//printing the swapped array(even)

	cout<<endl;

	s(odd,5);//swap done
	print(odd,5);//printing the swapped array(odd)
}
