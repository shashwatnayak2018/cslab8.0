//Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
//library
#include<iostream>
//namespace
using namespace std;
//function to find the largest number
int largest(int arr[],int n)
{
	int i;
	int a=arr[0];
	for(i=0;i<n;i++)
	{
		if(a<arr[i])
		{
			a=arr[i];
		}
	}
	return a;
}
//function to find the smallest number
int smallest(int arr[],int n)
{
	int i;
	int a=arr[0];
	for(i=0;i<n;i++)
	{
		if(a>arr[i])
		{
			a=arr[i];
		}
	}
	return a;
}
//function to find the mean
float mean(int arr[],int n)
{
	int i;
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	return (float)sum/(float)n;
}
//function to find the median of the numbers
float median(int arr[],int n)
{
	//declaring variables
	int i,j;
	float median;
	int a;
	//sorting the array
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				a=arr[j];
				arr[j]=arr[i];
				arr[i]=a;
			}
		}
	}
	//median for n is even is (arr[(n/2)-1]+arr[n/2])/2
	if(n%2==0)
	{
		median=(float)(arr[(n/2)-1]+arr[n/2])/2;
	}
	//median for n is odd is arr[((n+1)/2)-1]
	else
	{
		median=(float)arr[n/2];
	}
	return median;
}
//function to find element with highest frequency
int highf(int arr[],int n)
{
	//declaring variables
	int freq=1;
	int maxfreq;
	int a,i,j;
	int b=arr[0];
	for(int i=0;i<n;i++)
	{
		maxfreq=0;
		a=arr[i];
		maxfreq++;
		for(j=i+1;j<n;j++)
		{
			if(a==arr[j])
			{
				maxfreq++;
				if(maxfreq>freq)
				{
					freq=maxfreq;
					b=a;
				}
			}
		}
	}
	return b;
		
}
//write the main function
int main()
{
	//declare variables
	int n;
	int i;
	//ask for the size of the array
	cout<<"Enter the size of the array "<<endl;
	cin>>n;
	int arr[n];
	//ask for the elements of the array
	for(i=0;i<n;i++)
	{
		cout<<"Enter one element:"<<endl;
		cin>>arr[i];
	}
	//call each functions 
	cout<<"The largest number in the array is "<<largest(arr,n)<<endl;
	cout<<"The smallest number in the array is "<<smallest(arr,n)<<endl;
	cout<<"The mean of all elements in the array is "<<mean(arr,n)<<endl;
	cout<<"The median of all elements in the array is "<<median(arr,n)<<endl;
	cout<<"The element with highest frequency in the array is "<<highf(arr,n)<<endl;
	return 0;
}
