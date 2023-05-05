#include<iostream>
using namespace std;
void print(int a[],int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

void merge(int a[],int b[],int asize,int bsize)
{
	int c[11],k=0,i=0,j=0;
	
	while(i<asize && j<bsize)
	{
		if(b[j]<a[i])
		c[k++]=b[j++];
		else
		c[k++]=a[i++];
	}
	while(i<asize)
	{
		c[k++]=a[i++];
	}
	while(j<bsize)
	{
		c[k++]=b[j++];	
	}
	print(c,11);
}

int main()
{
	int a[100]={1,4,7,9,13};
	int b[6]={2,3,5,11,15,17};
	
	print(a,5);
	print(b,6);
	merge(a,b,5,6);
}
