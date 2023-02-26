//warning: this code will work only on sorted array !!!!

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
	    
    	//printing final array with no duplicate values--
    	for(int i=0;i<n;i++)
    	cout<<" "<<nums[i];
	}


//approach- taking i=1 (line 9) coz here we are comparing i to i-1 (array pos) i.e. his previous position
//so if we took i=0 inplace of i=1 then there would be an error coz we are comparing nums[0] with a garbage value(nums[-1]) .
// taking j=1 initially coz at the time of nums[0] there is only one element so no need to do anything. first element will 
// gonna store no matter what rest unless they aren't duplicate..
