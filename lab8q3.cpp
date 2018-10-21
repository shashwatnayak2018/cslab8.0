// Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
//library
#include<iostream>
using namespace std;
//function to find kth largest term
int klarge(int arr[],int n,int k)
{
	//declaring variables
	int i,j,a;
	//sorting the array in descending order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				a=arr[j];
				arr[j]=arr[i];
				arr[i]=a;
			}
		}
	}
	//return
	return arr[k-1];
}
//function to find kth smallest term
int ksmall(int arr[],int n,int k)
{
	//declaring variables
	int i,j,a;
	//sorting the array in ascending order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	//return
	return arr[k-1]; 
}
//write the main function
int main()
{
	//declaring variables
	int n,k;
	int i;
	//ask for the size of the array
	cout<<"Enter the size of the array "<<endl;
	cin>>n;
	int arr[n];
	//ask for the elements of the array
	for(i=0;i<n;i++)
	{
		cout<<"Enter one element of the array "<<endl;
		cin>>arr[i];
	}
	//ask for the value of k
	cout<<"Enter the integer value of k"<<endl;
	cin>>k;
	//call the above functions
	cout<<"The "<<k<<"th largest element of the array is "<<klarge(arr,n,k)<<endl;
	cout<<"The "<<k<<"th smallest element of the array is "<<ksmall(arr,n,k)<<endl;
	return 0;
}
