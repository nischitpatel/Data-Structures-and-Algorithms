#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
	int i;
	for(i=0; i<size; i++){
		if(key==arr[i]){
			return i;
		}
	}
	return -1;
}

int main(){
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	int arr[size];
	cout<<"Enter elements in array : ";
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter element to be searched : ";
	cin>>key;
	int index = linearSearch(arr, size, key);
	if(index!=-1){
		cout<<key<<" is found at "<<index<<endl;
	}
	else{
		cout<<key<<" not found in an array"<<endl;
	}
	return 0;
}
