#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
	int i;
	int start = 0, end = size-1;
	int mid;
	while(start<=end){
		mid = (start+end)/2;
		if(key==arr[mid]){
			return mid;
		}
		else if(key>arr[mid]){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
}

int main(){
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	int arr[size];
	cout<<"Enter elements of array in sorted manner (ascending) : ";
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter element to be searched : ";
	cin>>key;
	int index = binarySearch(arr, size, key);
	if(index!=-1){
		cout<<key<<" is found at "<<index<<endl;
	}
	else{
		cout<<key<<" not found in an array"<<endl;
	}
	return 0;
}
