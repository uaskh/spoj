#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int x){
	int start=0;
	int end=n;
	int mid=0;
	while(start<=end){
		mid=(start+end)/2;
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]<x){
			start=mid+1;
		}
		else
			end=mid-1;
	}
	return -1;
}
int main(){
	cout<<"Enter The Total Numbers"<<endl;
	int n;
	cin>>n;
	cout<<"Enter The Numbers"<<endl;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter The Total Queries"<<endl;
	int q;
	cin>>q;
	while(q--){
		cout<<"Enter The Number To find"<<endl;
		int x;
		cin>>x;
		int ans=binarysearch(arr,n-1,x);
		if(ans==-1)
			cout<<"The Number is Not found"<<endl;
		else
			cout<<"The Number is found at Index "<<ans<<endl;
	}
	return 0;
}
