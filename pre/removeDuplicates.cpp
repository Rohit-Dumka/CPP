#include<iostream>
using namespace std;
    int removeDuplicates(int nums[]) {
    int j=1;

	for(int i=1; i<13-1; i++)        
		if(nums[i]!=nums[i-1])
            nums[j++] = nums[i];

	return j;
    }
    int main(){
    	int nums[13]={ 1,2,3,3,5,8,8,8,8,11,15,17,17 };
    	int n=removeDuplicates(nums);
    	
    	for(int i=0;i<n;i++)
    	cout<<" "<<nums[i];
	}
