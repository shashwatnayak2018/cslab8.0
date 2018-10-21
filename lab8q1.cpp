//Write a program to find sum of all elements of an array. (Use functions)
//library
#include<iostream>
//namespace
using namespace std;
//function to find sum
int sum(int arr[], int n)
{
	//declaring variables
	int sum=0;
	int i;
	for(i==0;i<n;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
//write the main function
int main()
{
	//declaring variables
	int n;
	int i;
	//ask for the value of n
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	int arr[n];
	//asking for the elements of the array
	for(i=0;i<n;i++)
	{
		cout<<"Enter one element of the array:"<<endl;
		cin>>arr[i];
	}
	cout<<"The sum of all elements of an array is "<<sum(arr,n)<<endl;;
	return 0;
}
