#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		char arr[201];
		cin>>arr;
		int len=strlen(arr);
		char first=arr[0],second=arr[1];
		for(int i=2;i<len;i++){
			if(i%2==0){
				if(arr[i]==first);
				else{
					cout<<"NO"<<endl;
	  				break;
				}
			}
			else{
				if(arr[i]==second);
				else{
					cout<<"NO"<<endl;
					break;
				}
			}
			if(i==len-1)
				cout<<"YES"<<endl;
		}
		if(len==2)
			cout<<"YES"<<endl;
	}
	return 0;
}